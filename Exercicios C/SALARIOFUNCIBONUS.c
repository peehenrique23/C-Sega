 #include <stdio.h>
 // #define T 10
 
 int main ()
 {
 	
 float custoAlc [10], soma=0, media;
 int i;
 
 // custoAlc [0] = 5.60;
 // custoAlc [1] = 15.75;
 // custoAlc [2] = 8.45;
 // custoAlc [10-1] = 2.5;
 
 for (i= 0; i<10; i++)
 {
 	printf ("\n Informe o valor do alcool da %da farmacia: ", i+1);
 	scanf ("%f", &custoAlc [i]); // custoAlc [0]
 	soma+= custoAlc[i]; // soma = 0 + custo do momento (exmplo: 5.60)
 	                    // soma = 5.60 + 3.00
 	
 }
 
 media = soma/10;
 printf ("\n Media do valor do alcool %.2f \n", media);

 printf ("\n VALORES INFORMADOS \n");
 
 for (i=9; i>=0; i--) // ou (i=0; i<9; i++)
 {
  printf ("\ncusto do alcool [ %d ] = %.2f", i, custoAlc [i]);
 }
 
}
 
 

