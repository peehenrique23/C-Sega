#include <stdio.h>

int main ()

{
	//VALORES FLOAT
	float alunos[20], soma=0, media=0;
	//VALORES INTEIROS
	int i, MenorNota=10, acima=0;
	
	//ESTRUTURA DE REPETIÇÃO "FOR"
	for (i=0; i<20; i++ )
	for( i = 0; i <= 4; i++) {

  printf("\n Digite o gabarito: %d\n", i);
  scanf(" %c "&gabarinto[i]);
}

printf("\n Digite quantidade de alunos: \n");
scanf(" %d "&alunos);

for( cont =1, cont <= alunos, cont++){
  printf("\n resposta do aluno: %d\n", cont);

  for( i=0; i<=4;i++){

    printf("\n Digite a resposta da questão: %d\n", i);
    scanf(" %c "vetorrespostas[i]);

    if(gabarito[i] == vetorresposta[i]) {
      certa++;
    } else {
      errada++;
    }
}
