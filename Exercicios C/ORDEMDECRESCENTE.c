#include <stdio.h>
  
    int main(void)
   {
    int a, b, c;
    
    printf ("NUMERO 1: ");
    scanf("%d", &a);
    printf ("NUMERO 2: ");
    scanf("%d", &b);
    printf ("NUMERO 3: ");
    scanf("%d", &c);
    
    if (a > b)
    if (b > c) 
	printf("\n%4d%4d%4d\n", a, b, c);
    else 
    if (a > c) 
	printf("\n%4d%4d%4d\n", a, c, b);
    else 
	printf("\n%4d%4d%4d\n", c, a, b);
    else
    if (b > c)
    if (a > c) printf("\n%4d%4d%4d\n", b, a, c);
    else printf("\n%4d%4d%4d\n", b, c, a);
    else printf("\n%4d%4d%4d\n", c ,b, a);
    return 0;
	 }
