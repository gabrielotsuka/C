#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>  
#include <sys/types.h>
#include <signal.h>
#include <sys/shm.h>
#include <semaphore.h>

sem_t mutex;
int *vez, shmid, canal[2], cont=0, n=0, produz=1, consome=0;
void *shm = (void *)0;
key_t key=1128;
pid_t p[100];

void sig_handler(int sig){
   if 	( sig == SIGUSR1) { consome=1; cont=0;}
   else 
   if 	( sig == SIGUSR2) { produz=1;         }
}

void* thread (void *x){
	int i;	char chr;
	for(;;){
	    while(consome == 1){
	        sem_wait(&mutex);
	            if ( cont < 500 ){
		        read(canal[0],&chr,1);
			printf("P101 Thread %d -Leu do canal- Cont=%d\n",pthread_self(), cont); 
			cont++; n++;
		    }
		    else{
			consome=0; 
			for(i=0 ; i<100 ; i++)  kill(p[i], SIGUSR2);	
		   }
               sem_post(&mutex);	
	   }
	   if ( n >= 5000 ) break;  
	}
	sem_destroy(&mutex);  
	pthread_exit(0); 	 
}

char random_byte(void){return '@';}

main(){	
	char chr;
	int i, count, ciclo, status;
	pthread_t thr;

	shmid = shmget(key,sizeof(int),0666|IPC_CREAT);	if ( shmid == -1 ){ printf("shmget: erro\n");	exit(-1); }
	shm   = shmat(shmid,(void*)0,0); 		if (shm == (void *) -1 ){ printf("shmat: erro\n"); exit(-1); }
	vez = (int *) shm;

	signal(SIGUSR1, sig_handler); 
	signal(SIGUSR2, sig_handler); 

	if ( pipe(canal) == -1 ){ printf("pipe: erro"); exit(-1);}

	for( i=0 ; i<100 ; i++ ){
	    p[i]=fork();
	    if (p[i] < 0 ){ printf("fork: erro"); exit(-1);} 
	    else
	    if ( p[i] > 0 ) continue;
	    else
	    if (p[i] == 0 ){
	        for(ciclo = 1; ciclo <= 10; ){ 	
	           count=1;
		   while ( produz == 1 ){	
		       while(*vez != i);
		           chr = random_byte(); 		 
		           write(canal[1],&chr,1);
		           printf("P%d -Escreveu no Canal- Count=%d Ciclo=%d Vez->%d\n",i,count,ciclo,*vez);  	 	  	
			   if ( count++ == 5 ){
				produz = 0; ciclo++;
		                if ( i == 99 )
		    	          kill(getppid(), SIGUSR1);			   	
			   }			 
		       *vez = (i==99) ? 0 : i+1; 
		   } 		 						
		}
		shmdt(shm);
		exit(0);	     		    		
	    }									
	 }
	sem_init(&mutex, 0, 1);      
        pthread_create (&thr, NULL, thread, NULL);
	thread(NULL);
	for(i=0; i<100; i++) wait(&status);
	exit(0);	
}
