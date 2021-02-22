//Lamarck Ferreira da silva 16.1.4322
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main () 
{
	FILE *aluno;
	FILE *conceito; 
	int matricula=0;
	char nome[30];
	float nota1=0;
	float nota2=0;
	float nota3=0;
	int falta=0;
	float media=0;
	char resultado;
	if ((aluno = fopen("Alunos.txt","r")) == NULL) 
	{
		cout << "Erro na abertura do arquivo\n";
		return 0;
	}
	if ((conceito = fopen("Conceitos.txt","w")) == NULL) 
	{
		cout << "Erro na abertura do arquivo\n";
		return 0;
	}
	
	while (fscanf(aluno, "%d %[A-Z a-z] %f %f %f %d '/n'", &matricula, nome, &nota1, &nota2, &nota3, &falta) != EOF) 
	{
		media=(nota1+nota2+nota3)/3;
		if(falta>18)
		{
			
		}
		else if(media>= 9.0 && media<=10.0)
		{
			
		}
		else if(media>= 7.5 && media<9.0)
		{
			
		}
		else if(media>= 6.0 && media<7.5)
		{
			
		}
		else if(media<6.0)
		{
			
		}
	}
	
	return 0;
}