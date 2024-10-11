#include<stdio.h>
#include<stdlib.h>
int n, i, j, a;
int main (){
	do{
		printf("Digite um numero entre 3 e 10\n");
	    scanf("%d",&n);
	}
	while(n<3 || n>10);
	printf("%d",n);

	return 0;
}

// (||) = OU
// (&&) = E
