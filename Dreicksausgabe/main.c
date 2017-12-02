#include <stdio.h>

void main()
{
	int anzahlZeilen = 50;
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 1; i <= anzahlZeilen; i++)
	{
		for (j = anzahlZeilen - i; j < anzahlZeilen; j++)
		{
			printf("*");

		}

		for (temp = anzahlZeilen * 2; temp >= i * 2; temp--)
		{
			printf(" ");
		}

		for (j = anzahlZeilen - i; j < anzahlZeilen; j++)
		{
			printf("*");
		}


		printf("\n");
	}

	printf("\n");

	for (i = 1; i <= anzahlZeilen; i++)
	{
		for (j = 0 + i; j <= anzahlZeilen; j++)
		{
			printf("*");
		}


		for (temp = 0; temp < 0 + i; temp++)
		{
			printf(" ");
		
			if (temp > 0)
				printf(" ");
		}

		for (j = 0 + i; j <= anzahlZeilen; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	getchar();
}