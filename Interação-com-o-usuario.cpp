#include <stdio.h>
#include <locale.h>
int main () {
	int escolha;
	setlocale(LC_ALL, "Portuguese_Brasil");
	printf("Escolha um valor inteiro :\n (01)Como ser um hacker \n (02)onde aprender sobre redes \n (03)qual sistema operacional usar \n (04)como aprender a explorar vulnerabilidades \n");
	//Interagindo com o usuario
	scanf("%i", &escolha);
	//partes do if
	switch (escolha) {
		case 1:{
			printf("Para ser um hacker voce deve ter um conhecimento de sistema operacionais, de programação,e de redes");
			break;
		case 2:{
			printf("Para aprender soobre redes use a dorck a seguir para conseguir livros sobre rede \n redes filetype: pdf");
			break;
		}
		case 3:{
			printf("Use o sistema que te deixa feliz :) \n eu gosto do linux pq o codigo fonte é aberto, assim eu modifico para ficar da forma que eu preciso");
			break;
		}
		case 4:{
			printf("Leia o livro bug hunters diary ");
			break;
		}
		default: {
			printf("Opção digitada não valida");
			break;
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}}
