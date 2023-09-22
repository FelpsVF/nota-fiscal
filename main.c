#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float b,h,a,p;
	
	printf("Digite um valor para a base:");
	scanf("%f",&b);
	printf("Digite um valor para a altura:");
	scanf("%f",&h);
	a=b*h;
	p=b+b+h+h;
	printf("O valor da area e:%f \n O valor do perimetro e:%f", a, p);
	return 0;
}
