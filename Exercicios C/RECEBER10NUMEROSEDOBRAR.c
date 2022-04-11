#include <stdio.h>
#include <locale.h>

int main ()

{
	int a[10],b[10], c, c1;
	
	setlocale(LC_ALL, "");
	
	// informa o usuario
	printf ("Informe 10 números inteiros\n");
	
	for (c=0; c<10; c++)
	{
	//recebe e armazena dez numeros inteiros
	printf ("\n%do: ");
	scanf ("%d", &a[c]);
	
	//o segundo vetor recebe o valor do primeiro vezes dois
	b[c]=a[c]*2;
    }
    
    printf ("\n=====================================================\n");
    
    printf ("\nO dobro dos números informados:\n");
    
    for (c=0; c<10; c++){
    //indica a multiplicação dos valores recebidos
    printf ("\n%d x2 = %d\n",a[c],b[c]);}
    
    return 0;
	}
	


