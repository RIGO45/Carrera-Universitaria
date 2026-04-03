#include <stdio.h>

int I, J, T[12][4] = {{10, 10, 11, 12}, {11, 12, 10, 12}, {15, 12, 14, 13}, {15, 14, 16, 15}, {15, 17, 16, 17}, {16, 20, 18, 17}, {17, 20, 21, 19}, {20, 18, 22, 23}, {25, 28, 30, 27}, {30, 27, 32, 29}, {35, 40, 37, 34}, {30, 25, 22, 24}};

int selection;
int main()
{
	printf("\t\t T1  T2  T3  T4\n");

	for (I = 0; I <= 11; I = I + 1)
	{
		switch (I)
		{
		case 0:
			printf("Enero: \t\t");
			break;

		case 1:
			printf("\nFebrero: \t");
			break;

		case 2:
			printf("\nMarzo: \t\t");
			break;

		case 3:
			printf("\nAbril: \t\t");
			break;

		case 4:
			printf("\nMayo: \t\t");
			break;

		case 5:
			printf("\nJunio: \t\t");
			break;

		case 6:
			printf("\nJulio: \t\t");
			break;

		case 7:
			printf("\nAgosto: \t");
			break;

		case 8:
			printf("\nSeptiembre: \t");
			break;

		case 9:
			printf("\nOctubre: \t");
			break;

		case 10:
			printf("\nNoviembre: \t");
			break;

		case 11:
			printf("\nDiciembre: \t");
			break;
		}
		for (J = 0; J <= 3; J = J + 1)
		{
			printf("|%i|", T[I][J]);
		}
	}
	return 0;
}
