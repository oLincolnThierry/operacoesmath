#include<stdio.h>
#include<stdlib.h>
#include <time.h> 
int i, j, li, cl;
int main (){
	srand(time(NULL));
	printf("Quantidade de Linhas:\n");
	scanf("%d",&li);
	printf("Quantidade de Colunas:\n");
	scanf("%d",&cl);
	int m[li][cl];
	for(i=0;i<li;i++){
	    for(j=0;j<cl;j++){
	    	m[i][j]=rand()%100;
       }
	}
	for(i=0;i<li;i++){
	    for(j=0;j<cl;j++){
	        printf("[%d] [%d] = [%d]\n",i+1,j+1,m[i][j]);
	   }
	}
	
	
	return 0;
}

