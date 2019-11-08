#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	pid_t pids[50];
	int status;
	int i;
	for (i=0; i<50; i++){
		pids[i] = fork();
		if (pids[i] < 0)
			printf("Erro na criacao dos filhos\n");
		else if (pids[i] > 0)
			wait(&status);
		else if (pids[i] == 0){
			printf("PID: %d\tPPID: %d\n", getpid(), getppid());
			break;
		}
	} 
	
	return 0;
}