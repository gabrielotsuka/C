#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

int main (){
	pid_t p1, p2;
	int x, i, j;
	p1 = fork();
	if (p1 == 0) 
		for (i = 2; i <= 1000; i += 2) 
			printf("%d\n", i);
	else if (p1 > 0) {
		p2 = fork();
		if (p2 == 0) 
			for (j = 1; j < 1000; j += 2) 
				printf("%d\n", j);
		else if (p2 > 0) {
			wait(&x);
			wait(&x);
		}
	}
	else 
		printf("ERROR\n");
	return 0;
}