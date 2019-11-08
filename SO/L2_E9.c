#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void fun(int p){
	int i;
	for (int i=0; i<=1000; i+=2){
		if (p % 2 == 0 && i != 0)
			printf("%d\n", i);
		else if (p % 2 == 1 && i != 1000)
			printf("%d\n", i+1);
	}
}

int main(){
	pid_t pids[2];
	int status;
	int i;
	for (i=0; i<2; i++){
		pids[i] = fork();
		if (pids[i] < 0)
			printf("Erro na criacao dos filhos\n");
		else if (pids[i] > 0){
			wait(&status);
		} 
		else if (pids[i] == 0 && i == 1){
			fun(i);
			break;
		}
		else if (pids[i] == 0 && i == 0){
			fun(i);
			break;
		}
	} 
	
	return 0;
}