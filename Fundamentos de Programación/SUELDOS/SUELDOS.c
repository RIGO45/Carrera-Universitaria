#include <stdio.h>

float SUE,SUEM,SUEI,SUEF;

int main ()
{
	printf("Escribe el sueldo:$ ");
	scanf("%f",&SUE);
	
	if(SUE<1000)
	{
		SUEM=SUE*1.15;
		SUEF=SUEM;
	}
	else
	{
		SUEI=SUE*1.12;
		SUEF=SUEI;
	}
	printf("Este es su sueldo final:$ %0.3f",SUEF);
	
	return 0;
}
