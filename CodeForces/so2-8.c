#include <stdio.h> 
#include <sys/types.h> 
#include <sys/wait.h>
#include <unistd.h> 

int main () {
	pid_t p = fork();
	int x, i;
	if (p == 0)
		for (i=2; i<=1000; i+=2)
			printf ("%d\n", i);
	else if (p>1)
		wait(&x);
	else 
		printf("Deu ruim\n");
	return 0;
}