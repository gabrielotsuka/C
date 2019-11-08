#include <stdio.h>

int main () {
	int hi, mi, hf, mf, hr, mr;
	//Leitura dos dados
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	
	//Definição das horas (pode ser alterada de acordo com os minutos)
	hr = hf - hi;
	if (hr < 0)
		hr += 24;

	//Definição dos minutos
	mr = mf - mi;
	if (mr < 0) {
		mr += 60;
		hr--;
	}

	//Tratamento caso o jogo dure 24h exatas
	if (hi == hf && mi == mf)
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	else 
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, mr);

	return 0;
}