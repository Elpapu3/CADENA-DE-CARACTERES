 #include <stdio.h>
#include <string.h>
int main() {
	char pala[20];
	int longi;
		printf("ingrese una cadena de palabras: ");
		fgets(pala, sizeof(pala), stdin);
		
		longi = strlen(pala);
		
		printf("la longitud de la cadena de caracteres es %i", longi-1);
}

