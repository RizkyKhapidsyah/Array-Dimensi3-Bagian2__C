#include <stdio.h>
#include <conio.h>

/* Created by Rizky Khapidsyah */

int main() {
	char Nama[2][2][10];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Nama [%i][%i]  = ", i + 1, j + 1);
			gets(Nama[i][j]);
		}

		printf("\n");
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Nama [%i][%i]  = %s\n", i + 1, j + 1, Nama[i][j]);
		}
	}

	printf("\n");

	_getch();
	return 0;
}