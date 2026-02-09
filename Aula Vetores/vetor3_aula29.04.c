/*Ler a idade de 3 individuos e mostrar  as idades lidas*/
 
#include <stdio.h>
int main(void) {
	
	int idade[3];//quantidade de espaços necessários
	int cont;
	
	for (cont=0;cont<3;cont++){
	
	//assim utilizo apenas uma entrada de dados
	printf("Informe a idade: ");
    scanf("%d", &idade[cont]);//variavel cont pois inicio em zero e termino na segunda posição
	}
  
    //Mostra as idades
    
    for(cont=0;cont<3;cont++){
	
    	printf("A idade %d", idade[cont]);//repete o for para mostrar as idades ,coloco cont pois é a variavel que quero mostrar
  	}
}
   
