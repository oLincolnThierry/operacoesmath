#include<stdio.h>
#include<locale.h>
int i, j, v1[3], v2[3], v3[3];
int main(){
	setlocale(LC_ALL,"Portuguese");
	for(i=0;i<3;i++){
		printf("Digite um valor para o V1 na posição %d:\n",i+1);
		scanf("%d",&v1[i]);
		printf("Digite um valor para o V2 na posição %d :\n",i+1);
		scanf("%d",&v2[i]);
		v3[i]=v1[i]*v2[i];
	}
	for(i=0;i<3;i++){
		printf("\nV3[p%d]=%d",i+1,v3[i]);
    }
	
    return 0;
}
