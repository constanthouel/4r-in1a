#include <stdio.h>
#include <stdlib.h>

void print_message(char* text){
	printf("%s\n",text);
}

int calcule (int a, int b, char op) {
	while (op != '+' && op != '-' && op != '*' && op != '/'){
		printf("Entrer un opérateur valide:\n");
		scanf(" %c",&op);
	}
	switch (op) {
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			if (b != 0){
			return a/b;
			}
			else{
			     return -1;
			}			
	}
	return 0;
}
