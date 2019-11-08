#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

int x = 0;

int main () {
	pid_t p1;
	p1 = fork();
	if (p1 == 0) 
		x--;
	else if (p1 > 0)
		x++;
	printf("%d\n", x); 
	return 0;
}