#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* define colors */

#define RESET "\x1b[0m" /* Reset Colors */

#define red "\x1b[31m"
#define magenta "\x1b[35m"
#define green "\x1b[32m"
#define white "\x1b[37m"
#define cyan "\x1b[36m"

#define imp printf

/* end define colors */

int main(void) {

system("clear");
printf("\n\n");
printf(white"                            Mark662                         \n");         
printf(white"      @                                               @     \n");    
printf(white"      @@@   @         &@@@@@@@@@@@@@@@@         @   @@@		\n");
printf(white"      @@@@@@@@@@@&@@@@@#(//(//((//(/(#@@@@@@@@@@@@@@@@@     \n");
printf(white"       @@@###@@@#&@@@@((/(//((//(((((((@@@@##@@@###@@@		\n");
printf(white"         @@@@@&###(((/(#((((((((((((((((///(####@@@@@@		\n");
printf(white"       @@@@@@@@@@@@@&##((///(@@@@@////(/##@@@@@@@@@@@@@@		\n");
printf(white"     @@@@@@@@@@@@*(@@@@@@((((/@/((((&@@@@@**@@@@@(@@@@@@	\n");
printf(white"     /@@@((&@@@@@**  @@@@@@(((/((@@@@@@@  **@@@@@#/&@@@&	\n");
printf(white"     @@@@//#@@&@@@     *@@@@@@@@@@@@@*     @@@@@@#//@@@@	\n");
printf(white"     @@@#///####(@@@@@@@@@@*******@@@@@@@@@@##(##///&@@@	\n");
printf(white"     @@@@(/#(//########(((@@*****@@/(#########((/&((@@@&	\n");
printf(white"      @@@#@@((/(((((((/((((@@@@@@&((((/(((((((/(/@@#@@@		\n");
printf(white"        @@@@@@/////////////////(////////////////(@@@@@@		\n");
printf(white"        @@@&@@##(@@((//(///////(((/(((/(((@@/##@@@@@@		\n");
printf(white"          @@@@@@#@@@@(/////////////////#@@@@#@@@ @/			\n");
printf(white"                .@@@ @@@@@###(///(###@@@@@ @@@				\n");
printf(white"                       #@@@@####&@@@@,						\n");
printf(white"                           @@@@@@@							\n");
printf(white"                             .@								\n\n");
   printf(cyan"	Created By Mark662 to all Linux/Pentest beginners \n\n");

   imp(magenta" Selecione seu sistema:\n\n");
   		
   		imp(white" Termux - [1]\n");
   		imp(white" Linux  - [2]\n");
   		imp(white" BSD    - [3]\n");
   		imp(white" Win    - [4]\n");
   		imp("\n");
   		imp(green" syserros - [5]\n");
   		imp(red" Fechar - [0]\n\n");

   char info='0';
   	printf(white" Informe seu sistema: ");
   scanf("%s",&info);

   switch(info) {

	   		/* Case 1 - Termux */
	   
	    case '1':
	    	printf("Running installation Repositories...\n\n");
	   		system("cd components/ && bash termux.sh");
	   		break;

	   		/* Case 2 - Linux*/

		   	case '2':
		   		system("cd distros/ && ./distros");
		   		break;

		   		
			   		/* Case 3 - BSD */

			   	case '3':
			   		system("cd components/ && bash bsd.sh");
			   		break;

			   			/* Case 4 - Windows */

			   		case '4':
			   			system("cd components/ && bash win.sh");
			   			break;

			   				/* Syserros */
			   			case '5':
			   				system("cd syserros/ && ./syserros");
			   				break;

			   			/* Fechar */

			   			case '0':
			   				printf("\n Fechando...\n\n");
			   				system("clear && exit");
			   				return 0;
			   				break;
			}

}
