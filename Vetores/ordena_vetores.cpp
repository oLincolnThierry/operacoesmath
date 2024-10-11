#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int v1[5],v2[1],i;
 
int main() { 
srand(time(NULL));

for (i=0; i<5; i++){
	v1[i]=rand()%100;
}
v2[1] = v1[0] + v1[1];
printf("\nprimeira posicao do vetor 1: %d",v1[0]); 
printf("\nsegunda posicao do vetor 1: %d",v1[1]);
printf("\nprimeira posicao do vetor 2: %d",v2[1]);

return 0;
}



