#include<stdio.h>
#include<locale.h>
char nome[5][20]={"aviao","gato","papagaio","casa","madeira"};
int i;
int main(){
	setlocale(LC_ALL,"Portuguese");
	for(i=0;i<5;i++){
		printf("%s\n",nome[i]);
	}
	return 0;
}
