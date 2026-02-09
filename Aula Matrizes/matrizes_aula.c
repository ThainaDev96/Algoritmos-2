#include <stdio.h>
int main(void) {
	int matriz[4][4];
	int i,j;
	
	for(i=0;i<4;i++){//fixei a linha 
	
	
	for(j=0;j<4;j++){//navehar colunas
		
		printf("informe o valor para armazenar na matriz\n");
		scanf("%d",&matriz[i][j]);
	}
}
	printf("mostrando valores armazenados na matriz\n");
	
		
	for(i=0;i<4;i++)
	{
		
		for(j=0;j<4;j++)
		{
		
		printf("%d" ,matriz[i][j]);
		}
		printf("\n");
	}
}
	
