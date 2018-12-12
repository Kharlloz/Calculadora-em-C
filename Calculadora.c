//Calculadora-em-C

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	float num1, num2, result;
	char oper;
	
		system ("cls");
		printf ("\n\t===============");
		printf ("\n\t| Bem Vindo à |");
		printf ("\n\t| Calculadora |");
		printf ("\n\t===============\n\n");
			
		printf ("Created by: Carlos R. de O. Filho\n\n");
		system ("pause");
		
		system ("cls");
		printf ("\n\tCalculadora em Linguagem C\n");
		
		printf ("\n\tOperadores disponíveis\n\n");
		printf ("\t'+': soma\n");
		printf ("\t'-': subtração\n");
		printf ("\t'*': multiplicação\n");
		printf ("\t'/': divisão\n");
		printf ("\t'%%': resto da divisão\n\n");
		system ("pause");
		
		system ("cls");
		printf ("\n\tPara efetuar os calculos\n\tutilize o seguinte exemplo:\n\n");
		printf ("\tDigite o primeiro número, mais o operador necessário, mais o segundo número\n");
		printf ("\tExemplo: 2 + 1, 2.5 * 5, 10 / 2\n\n");
		system ("pause");
		
		system ("cls");
		printf ("\n\t======================");
		printf ("\n\t| Calcule os números |");
		printf ("\n\t======================");
		printf ("\n\t| + | - | * | / |  %% |");
		printf ("\n\t|   7  |   8   |  9  |");
		printf ("\n\t|   4  |   5   |  6  |");
		printf ("\n\t|   1  |   2   |  3  |");
		printf ("\n\t|   0  |   C   |  =  |");
		printf ("\n\t======================\n\n");
		
		printf ("\n\tPara sair da calculador digite:\n\t0 0 0\n\n");
	
	do{	
		scanf ("%f", &num1);
		scanf (" %c", &oper);
		scanf ("%f", &num2);
		
		printf ("\n\tCalculando: %.2f %c %.2f =", num1, oper, num2);
		
		switch (oper){
			case '+':
				printf ("%.2f\n\n", num1 + num2);
				break;
				
			case '-':
				printf ("%.2f\n\n", num1 - num2);
				break;
				
			case '*':
				printf ("%.2f\n\n", num1 * num2);
				break;
				
			case '/':
				if(num2 != 0){
					printf ("%.2f\n\n", num1 / num2);
				} else {
					printf ("\n\tNão existe divisão por 0\n\n");
				}
				break;
				
			case '%':
				printf ("%d\n\n", (int)num1 % (int)num2);
				break;
				
			default:
				if(num1 != 0 && oper != '0' && num2 != 0){
					printf ("\n\tOperador inválido\n\n");
					} else {
						printf ("\n\tFechando Calculadora\n\n");
					}
		}
	
	} while (num1 != 0 && oper != '0' && num2 != 0);
	
	return 0;
}
