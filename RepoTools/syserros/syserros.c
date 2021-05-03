#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define printk printf

#define RESET "\x1b[0m" /* Reset Colors */
#define red "\x1b[31m"
#define magenta "\x1b[35m"
#define green "\x1b[32m"
#define white "\x1b[37m"

int main(void)
{
	system("clear");

	printk("\n");
	printk(white"Syserros é um diretório criado por Mark662, com intuíto de reparar erros que são encontrados ultimamente\n");
	printk(white"após a instalação de um novo Sistema Operacional. Lembrando que nem todos os erros serão ajustados, já que\n");
	printk(white"podem vir surgindo novos erros, portanto com o tempo, serão adicionados ao repositório.\n\n");

	printk(" Debian	 - [1]\n");
	printk(" Arch  	 - [2]\n");
	printk(" RedHat  - [3]\n");
	printk(" Ubuntu  - [4]\n");
	printk("\n");
	printk(" Voltar  - [0]\n\n");

	char syserros='0';
		printk(white"Informe o seu Sistema Operacional: ");
	scanf("%s", &syserros);

	switch(syserros){

		/* Debian */
		case '1':
			printk(green"\nExecutando ajustes da Distribuição Debian. \n");
			system("clear && cd systems/ && bash sysdebian.sh");
		break;

			/*Arch*/
			case '2':
				printk(green"\nExecutando ajustes da Distribuição Arch Linux.\n");
				system("clear && cd systems/ && bash sysarch.sh");
			break;

				/*RedHat*/
				case '3':
					printk(green"\nExecutando ajustes da Distribuição RedHat. \n");
					system("clear && cd systems/ && bash sysredhat.sh");
				break;

					/*Ubuntu*/
					case '4':
						printk(green"\nExecutando ajustes da Distribuição Ubuntu");
						system("clear && cd systems/ && bash sysubuntu.sh");
					break;


				/*Voltar*/
					case '0':
						printk(green"\nVoltando...\n\n");
						system("clear && cd .. && ./Repotaller");
					break;

	}

	return 0;
}