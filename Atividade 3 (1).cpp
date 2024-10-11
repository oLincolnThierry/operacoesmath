#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char nome[2][40], sexo[2][20];
int i, idade[2], telefone[2]; 

int main(){
	//prencher nome
	for(i=0;i<2;i++){
		printf("Digite seu nome");
scanf("%[^\n]",&nome[i]);
printf("Digite seu telefone");
scanf("%d",&telefone[i]);
printf("Digite seu genero");
scanf("%s",&sexo[i]);
printf("Digite sua idade");
scanf("%d",&idade[i]);	
}
for(i=0;i<2;i++){
	printf("\n%s, %d, %s, %d\n",nome[i],telefone[i], sexo[i], idade[i]);
	
	return 0;
}
	}
	 
	


