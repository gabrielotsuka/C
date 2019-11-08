#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int M[5001][5001];
int N[5001][5001];

void fill(void){
	int i, j;
	for (i=0; i<5000; i++){
		for (j=0; j<5000; j++){
			srand(time(NULL));
			M[i][j] = rand();
			srand(time(NULL));
			N[i][j] = rand();
		}
		printf("heheh\n");
	}
}

int main(){
	printf("oua\n");
	fill();
	printf("oua\n");





	return 0;
}