#include <stdio.h>
#include <locale.h>

float celso(float f){
	float c=((f-32)*5)/9;
	printf("\nO valor de %.2f F em celso é %.2f C\n",f,c);
	return c;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	float f;
	printf("Digite um valor em Fahrenheit\n");
	scanf("%f",&f);
	celso(f);
	return 0;
}
