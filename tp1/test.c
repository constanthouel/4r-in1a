#include <stdio.h>
#include "./tp1.h"

int main(int argc, char **argv){
	int erra=0,errb=0,errop=0,a,b;
	char op;
	if (argc < 3){
	while (erra != 1){
		printf("Saisir un chiffre\n");
		erra = scanf("%d",&a);
	}
	while (errb != 1){
		printf("Saisir un chiffre\n");
		errb = scanf("%d",&b);
	}
	}
	else if (argc == 4){
	erra = sscanf(argv[1],"%d",&a);
	if (erra != 1){
		printf("Erreur de saisie");
		return 1;
	}
	errb = sscanf(argv[2],"%d",&b);
	if (errb != 1){
		printf("Erreur de saisie");
		return 1;
	}
	errop = sscanf(argv[3],"%c",&op);
	if (errop != 1){
		printf("Erreur de saisie");
		return 1;
	}
	}
	printf("%d\n",calcule(a,b,op));
    return 0;
}
