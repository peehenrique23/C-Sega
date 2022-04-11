
#include <stdio.h>

int main ()
{
	int x, contM3=0;
	
	for ( x=1 ; x <=500; ++x ){
	
	if (x%3 == 0 && x%2 == 1){
		
	++contM3;
	printf ("\n %d", x);
}
}

printf ("\n\nQuantidade de numeros impares de 1 a 500 que sao multiplos de 3: %d " , contM3);

	return 0;
}
