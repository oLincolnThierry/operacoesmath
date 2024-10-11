#include <stdio.h>
int a;
float b,c;

void f1();

int main(){
	a= 500;
	b=13,77;
	f1();
	printf("%d,%.2f,%.2f",a,b,c);
}

void f1(){
	c=a+b;
}
