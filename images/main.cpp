#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main( ) {
	
	int qtd;
	printf("Digite a quantidade de notas para armazenar \n");
	scanf("%d", &qtd);
	
	float notas[qtd];
	
	int cont;
	for(cont = 0;cont < qtd; cont++){
		printf("Digite a notanumero %d \n", (cont+1));
		scanf("%f", &notas[cont]);
		
	}
	float total = 0.0;
	int cont2;
	for (cont2 = 0 ; cont2< qtd; cont2++){
		total = total +notas[cont2];
		printf("Nota na posicao %d e %f \n", (cont2+1), notas[cont2]);
	}
	float media = 0.0;
	media = total / qtd;
	printf("Media das notas %f ", media);
	
	char nome[100] = ("\n Gustavo lima de lucena\n");
	printf("Nome criado e %s", nome);
	
	int cont3 = 0;
	while(nome[cont3] != '\0'){
		printf("letra na posicao %d e %c \n", (cont3+1), nome[cont3]);
		cont3 = cont3+1;
	}
}
