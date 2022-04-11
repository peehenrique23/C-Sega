#include <stdio.h>

void recebe_vetores (int *numeros, int tamanho);
void analisa_vetores (int *numeros, int tamanho);

int main(){
	
    int tamanho = 10;
    
    int numeros [10];
    
    printf ("Digite dez numeros\n\n");
    
    recebe_vetores (numeros, tamanho);
    analisa_vetores (numeros,tamanho);
    
}

void recebe_vetores (int *numeros, int tamanho){
    int i;
    for (i=0; i<10; i++, numeros++){
    printf ("%d - numero= ", i+1);
    scanf ("%d", numeros);}}

void analisa_vetores (int *numeros, int tamanho){
	
	int i, maior=0;
	
    for (i=0; i<10; i++, numeros++){
    
    if (*numeros > maior)
    	
    maior = *numeros;}
    
    printf ("O maior numero e %d ", maior);}
    
    



