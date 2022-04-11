 #include <stdio.h>

int main()
{
    int numero;
    

    while(numero != 2002)
    {
    scanf("%d", &numero);
    
    if(numero == 2002){
    printf("Acesso Permitido\n" );
    return 0;}
    
	else{
    printf("Senha Invalida\n" );
    }
    }
    return 0;
}
