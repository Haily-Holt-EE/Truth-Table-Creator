#ifndef TT_H
#define TT_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void populateTable(int **myTable, int inputs, int rows);
void printTable (FILE *outfile, int **myTable, int inputs, int rows);

#endif