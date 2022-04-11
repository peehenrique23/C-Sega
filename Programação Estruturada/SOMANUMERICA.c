#include <stdio.h>

void leitura(int *p,int q);

void resultante(int *pa,int *pb,int *pc,int q);

void imprime(int *p,int q);

main (){
	
	int a[10], b[10], c[10], qtde;
	
	printf("\nSoma de 2 vetores\n\n");
	
	do{
	printf("\nQtde de elementos - (max. 10) = ");
	scanf("%i",&qtde);
	fflush(stdin);
	}while(qtde<1 || qtde>10);
	
	printf("\nLeitura - Vetor a:");
	leitura(a,qtde);
	
	printf("\nLeitura - Vetor b:");
	leitura(b,qtde);
	resultante(a,b,c,qtde);
	
	system("cls");
	
	printf("\nImprime - Vetor a:");
	imprime(a,qtde);
	
	printf("\nImprime - Vetor b:");
	imprime(b,qtde);
	
	printf("\nImprime - Vetor c:");
	imprime(c,qtde);}
	
	void leitura(int *p,int q){
	int i;
	for(i=0;i<q;i++,p++){
	printf("\nvet[%i]=",i+1);
	scanf("%i",p);
	fflush(stdin);}}
	
	void resultante(int *pa,int *pb,int *pc,int q){
		
	int i;
	
	for(i=0;i<q;i++,pa++,pb++,pc++)
	
	*pc=*pa+*pb;}
	
	void imprime(int *p,int q){
		
	int i;
	for(i=0;i<q;i++,p++)
	printf("\nvet[%i]=%i",i,*p);
	printf("\n\n\n");
	system("pause");}
	
	
	
    
	
	
	
