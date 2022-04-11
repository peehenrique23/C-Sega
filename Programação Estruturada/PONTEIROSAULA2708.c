#include <stdio.h>

int main ()
{
	int a,b;
	
	a=10, b=20;
	
	troca (a,b);
}
void troca (int x, int y){
	int temp;
	temp = x;
	x=y;
	y=temp;
}
