#include <stdio.h>
#include "bibliotecaPilha.h"

int main(){
	int dec, base;
	tpilha p;
	inicializa(&p);
	printf ("Valor em decimal e a base de ( 2 a 8): ");
	scanf("%d%d",&dec,&base);
	while(dec>0){
		push(&p,dec%base);
		dec = dec / base; // dec /=2; (ele mesmo divido por 2)		
	}// fim while
	printf("Conversao: ");
	mostraPilha(p);
	return 0;
}
