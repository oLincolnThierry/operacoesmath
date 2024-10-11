#include <stdio.h>
#define pi 3.14

void piraio(float r);

int main(){
	float r;
	printf("Digite o valor do raio:\n");
	scanf("%f",&r);
	piraio(r);
	return 0;
}

void piraio(float r){
    float a=4*pi*r*r;
    printf("\nO valor da area e : %.2f",a);
}
