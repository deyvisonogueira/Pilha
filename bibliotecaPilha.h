#include <stdio.h>
#include <stdlib.h> //importante para aloca��o de mem�ria 
#define MAX 1000

typedef int tdado;
typedef struct{
	int topo;
	tdado pilha[MAX];
	
}tpilha;

void inicializa(tpilha *p){
	p->topo = -1;	
}

//___________________________

int push(tpilha *p, tdado x){ 
	if (p->topo == MAX -1) // est� cheio 
	return 0;
	p->topo++;
	p->pilha[p->topo]=x;
	return 1;
}

//___________________________

tdado pop (tpilha *p){
	tdado aux;
	aux = p->pilha[p->topo];
	p->topo--;
	return aux;	
}

//___________________________

tdado peek(tpilha p){ //top
	return p.pilha[p.topo];
}			
			
//___________________________
			

int isEmpty(tpilha p){ // p passagem por valor (*p = por refer�ncia)
	if(p.topo == -1)
	return 1;
	else
	return 0;
}

//___________________________

void mostraPilha(tpilha p){
	 while(p.topo!=-1){
	 	printf("%d | ", p.pilha[p.topo]); //mostra o valor do topo
	 	p.topo--; //desce a posi��o
	 }// fim while
	 printf("\n");
}


