#include<stdio.h>

int H1,M1,S1,H2,M2,S2,HF,MF,SF,H1S,H2S,HTS;

int main()
{
	printf("Dame la primera hora en formato HH:MM:SS:");
	scanf("%i,%i,%i",&H1,&M1,&S1);
	
	printf("Dame la segunda hora en formato HH:MM:SS:");
	scanf("%i,%i,%i",&H2,&M2,&S2);
	
	H1S=H1*3600+M1*60+S1;
	H2S=H2*3600+M2*60+S2;
	HTS=H1S+H2S;
	HF=HTS/3600;
	MF=(HTS%3600)/60;
	SF=(HTS%3600)%60;
	
	printf("Resultado:  %i:%i:%i",HF,MF,SF);
	
	return 0;
}
