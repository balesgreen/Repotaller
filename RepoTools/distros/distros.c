#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* define colors */

#define RESET "\x1b[0m" /* Reset Colors */

#define red "\x1b[31m"
#define magenta "\x1b[35m"
#define green "\x1b[32m"
#define white "\x1b[37m"
#define blue "\x1b[34m"
#define cyan "\x1b[36m"

#define imp printf

/* end define colors */

int main(void) {

	system("clear");

imp(white"               a8888b.             \n");
imp(white"              d888888b.            \n");
imp(white"              8PzYPzY88            \n");
imp(white"              8|o||o|88            \n");
imp(white"              8'    .88            \n");
imp(white"              8`._.' Y8.           \n");
imp(white"             d/      `8b.          \n");
imp(white"            dP   .    Y8b.         \n");
imp(white"           d8:z  z  `::88b         \n");
imp(white"          d8z         zY88b        \n");
imp(white"         :8P    '      :888        \n");
imp(white"          8a.   :     _a88P        \n");
imp(white"        ._/zYaa_:   .| 88P|        \n");
imp(white"       |    YPz    `| 8P  `.       \n");
imp(white"        /     (.___.d|    .'       \n");
imp(white"        `--.z__)8888P`._.'         \n");
imp(white"                                   \n");
	printf(cyan" Distribuições Linux\n\n");
		imp("\n\n");

		imp(" Debian - [1]\n");
		imp(" Arch   - [2]\n");
		imp(" Ubuntu - [3]\n");
		imp(" RedHat - [4]\n");
		imp(" Voltar - [0]\n\n");


	char distro='0';
		printf("Qual a sua distribução linux? > ");
	scanf("%s", &distro);

	switch(distro) {

		/* Debian */

		case '1':
			system("cd ../components/debian.sh");
			break;

			/* Arch */

			case '2':
				system("cd ../ && cd components/ && bash arch.sh");
				break;

				/* Ubuntu */

				case '3':
					system("cd ../components/ubuntu.sh");
					break;

					/* Red Hat */

					case '4':
						system("cd ../components/redhat.sh");
						break;

						/* Voltar */

						case '0':
							system("cd ../ && clear && ./Repotaller");
							break;

	}

	return 0;
}