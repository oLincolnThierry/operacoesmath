#include <stdio.h>

void soma(int n1, float n2){
	float r=n1+n2;
	printf("A soma de %d com %.2f e %.2f",n1,n2,r);
	}
	
int main(){
	float b=4.7,r;
	int a=8;
    soma(a,b);
    return 0;
}

