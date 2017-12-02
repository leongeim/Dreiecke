#include <stdio.h>

void main()
{
	int anzahlZeilen = 50;
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 1; i <= anzahlZeilen; i++)
	{
		//Erstes Dreieck
		for (j = anzahlZeilen - i; j < anzahlZeilen; j++)
		{
			printf("*");

		}

		//Leerzeichen in Relation zur gesamten Anzahl der Zeilen und der aktuellen Zeile
		for (temp = anzahlZeilen * 2; temp >= i * 2; temp--)
		{
			printf(" ");
		}

		//Zweites Dreieck
		for (j = anzahlZeilen - i; j < anzahlZeilen; j++)
		{
			printf("*");
		}


		printf("\n");
	}

	printf("\n");

	for (i = 1; i <= anzahlZeilen; i++)
	{
		//3tes Dreieck
		for (j = 0 + i; j <= anzahlZeilen; j++)
		{
			printf("*");
		}

		//So viele Leerzeichen wie die Aktuelle Zeile - 1
		for (temp = 0; temp < i; temp++)
		{
			printf(" ");
		
			//Nach dem ersten Leerzeichen müssen immer 2 gemacht werden
			if (temp > 0)
				printf(" ");
		}

		//4tes Dreieck
		for (j = 0 + i; j <= anzahlZeilen; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	getchar();
}