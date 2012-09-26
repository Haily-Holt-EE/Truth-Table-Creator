#include "TT.h"

int main (void)
{
	int **table = NULL;
	int inputs = 0, rows = 0, index = 0;
	FILE *outp = fopen("output.dat", "w");

	printf("Number of inputs? ");
	scanf("%d", &inputs);

	rows = pow(2, inputs);

	table = (int**)malloc(sizeof(int*) * rows);
	
	for (index = 0; index < rows; index++)
	{
		table[index] = (int*)malloc(sizeof(int) * inputs);
	}

	populateTable(table, inputs, rows);
	printTable(outp, table, inputs, rows);

	fclose(outp);

	return 0;
}