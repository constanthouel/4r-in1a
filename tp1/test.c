#include <stdio.h>
#include "./tp1.h"

int main(int argc, char **argv){
	int i;
	char text[30];
	int err,a,b;
	char op;
	if (argc == 1){
		scanf("%s",text);
		print_message(text);
	}
	else if (argc == 2){
		print_message(argv[1]);
	}
	else if (argc > 2){
		for ( i=1; i < argc; i++){
			print_message(argv[i]);
		}
	}
	else {
		print_message("Message par defaut\n");
	}
	/*err = sscanf(argv[1],"%d",&a);
	if (err != 1){
		printf("Erreur de saisie");
	}
	err = sscanf(argv[2],"%d",&b);
	if (err != 1){
		printf("Erreur de saisie");
	}
	err = sscanf(argv[3],"%c",&op);
	if (err != 1){
		printf("Erreur de saisie");
	}
	calcule(a,b,op);*/
    return 0;
}
