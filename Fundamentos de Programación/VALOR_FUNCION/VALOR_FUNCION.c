#include<stdio.h>
#include<math.h>

int NUM,V;
float VAL;

int selection;

int main()
{
	printf("Dame un valor: ");
	scanf("%i",&V);
	
	printf("Selecciona la operacion que quieras realizar 1:Multiplicar, 2:Potencia, 3:Division.");
	scanf("%i",&NUM);
	
	switch(NUM)
	{
		case 1: VAL=100*V;
		break;
		
		case 2: VAL=pow(100,V);
		break;
		
		case 3: VAL=100.0/V;
		break;
		
		default: VAL=0;
	}
	printf("Este es el resultado: %0.2f",VAL);
	return 0;
}
