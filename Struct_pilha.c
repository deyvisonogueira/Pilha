#include <stdio.h>
#include <stdlib.h> //importante para alocação de memória 
#define MAX 10

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
	if (p->topo == MAX -1) // está cheio 
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
			

int isEmpty(tpilha p){ // p passagem por valor (*p = por referência)
	if(p.topo == -1)
	return 1;
	else
	return 0;
}

//___________________________

void mostraPilha(tpilha p){
	 while(p.topo!=-1){
	 	printf("%d | ", p.pilha[p.topo]); //mostra o valor do topo
	 	p.topo--; //desce a posição
	 }// fim while
	 printf("\n");
}

//___________________________

int menu(){
	int op;
	printf("*** Estrutura de Dados I - Pilha Estatica ****\n");
	printf("1-Push (Inserir)\n");
	printf("2-Pop (Remover)\n");
	printf("3-Top (Olhar Topo)\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}

//___________________________

int main(){
	tpilha p1;
	tdado x;
	int op; //receber o retorno do menu
	inicializa(&p1); //& trazendo o endereço de memória
	do{
		mostraPilha(p1);
		printf("Topo: %d\n",p1.topo); //ver valor do topo
		op = menu();
		switch(op){
			case 1: printf("Dado para inserir: ");
			        scanf ("%d", &x);
			        if(push(&p1,x) == 1)
			          printf("Dado inserido! :)\n");
			        else
					  printf("Stack overflow, so sorry :'(\n");
		    break;
		    case 2: if(!isEmpty(p1)){
				    x= pop(&p1);
		            printf("Dado removido %d :(\n",x);
			}//fim do if vazio   
			        else              
					printf("Stack empty!\n");										
			break;			
			case 3: if(!isEmpty(p1)){
				    x= peek(p1);
		            printf("Dado do topo: %d\n",x);
			}//fim do if vazio   
			        else              
					printf("Stack empty!\n"); 				
			break;
			case 0: printf("Saindo... ;)");
			  
		}//fim switch
		getch();
		system("cls");
	}while(op!=0);
}

