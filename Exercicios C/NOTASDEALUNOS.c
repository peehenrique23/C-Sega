#include <stdio.h>

int main ()
{
	char mRespostaAluno[4][5], vgabarito[5]= {'a','b', 'a','c','b'};
	int i,j, numAc;
	int notas[4]={0,0,0,0};
	
	
	for (i=0; i< 5; i++ )
	{
	printf("\nGabarito da questao [%d]= ", i+1);
	fflush(stdin);scanf("%c", &vgabarito[i]);}
	
	for (i=0; i< 4; i++ ) //controle do aluno  - i
	{
	printf("\nAluno %d", i+1);
	numAc=0;
	for (j=0; j<5; j++)
	{
	printf("\nQual a resposta da questao %d= ", j+1);
	scanf(" %c", &mRespostaAluno[i] [j]   );
	if (mRespostaAluno[i][j]  ==  vgabarito[j])
	{
	++numAc;}
	}
	notas[i] = numAc*2;		
	printf("\nO aluno %d acertou %d e teve nota %d", i+1, numAc, notas[i] );
	if (notas[i] <5)
	printf("\nEstude um pouco mais");
	}	
	
	printf("\n As notas dos alunos sao");
	for (i=0; i<5; i++)
	{
	printf("\n Aluno %d teve %d", i+1, notas[i]);
	}}   

	


