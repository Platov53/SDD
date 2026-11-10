#include <stdio.h>
#include "utils.h"

//Método de exibição do help
void help(void)
{
	printf("Esse programa é desenvolvido para ajudar a parar um processo em segundo plano caso haja queda de energia\n");
	printf("O programa monitora a entrada principal de ethernet, caso o computador esteja num no-break e o roteador não, além de estarem na mesma rede elétrica.\n");
	printf("Obs: Claramente esse programa é limitado, mas serve para mim e outras pessoas com o mesmo problema bem específico :P.\n");
	printf("\nUso: sdd [-h | --help] --[processo/daemon] -[tempo de checagem]\n"); 
	
}
