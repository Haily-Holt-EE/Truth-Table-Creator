#include "TT.h"

void populateTable(int **myTable, int inputs, int rows)
{
	int index1 = 0, index2 = 0, divisions = 0, num = 1, counter = 1;

	divisions = rows;

	for (index1 = 0; index1 < inputs; index1++ )
	{
		divisions = divisions / 2;

		for (index2 = 0; index2 < rows; index2++)
		{

			if (((counter - 1) % divisions) == 0)
			{
				if (num == 0)
				{
					num = 1;
				}
				else
				{
					num = 0;
				}

			}

			myTable[index2][index1] = num;
			counter++;
		}
	}
}

void printTable( FILE *outfile, int **myTable, int inputs, int rows )
{
	int index1 = 0, index2 = 0;

	for (index1 = 0; index1 < rows; index1++)
	{
		fprintf(outfile, "%d ::: ", index1);

		for (index2 = 0; index2 < inputs; index2++)
		{
			fprintf(outfile, "%d ", myTable[index1][index2]);
		}

		fprintf(outfile, "\n");
	}
}
