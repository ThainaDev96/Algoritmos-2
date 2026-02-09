#include <stdio.h>
int main (void)
{
	int i, j;
	int linha, coluna;
	
	printf ("Informe a quantidade de linhas da matriz: ");
	scanf ("%d", &linha);
	printf ("Informe a quantidade de colunas da matriz: ");
	scanf ("%d", &coluna);
	
	int matriz[linha][coluna]; // matriz[4][5]
	
	
	for (i=0; i<linha; i++) // fixei a linha 
	{
		for (j=0; j<coluna;j++) // navegar nas colunas
		{
			printf ("Informe o valor para armazenar na matriz: ");
			scanf ("%d", &matriz[i][j]);
		}
	}
	
	printf (" Mostrando valores armazenados na matriz: \n");
	for (i=0; i<linha; i++)
	{
		for (j=0; j<coluna;j++)
		{
			printf (" %d ", matriz[i][j]);
		}
		printf ("\n");
	}
	
}
