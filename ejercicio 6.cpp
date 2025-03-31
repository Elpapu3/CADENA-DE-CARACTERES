#include <stdio.h>
#include <string.h>

int main() {

    char fra[] = "hola papu"; 
    char *palabras[50]; 
    int cont = 0;

    char * token = strtok(fra, " ");
    while (token != NULL) {
        palabras[cont++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = cont - 1; i >= 0; i--) {
        printf("%s", palabras[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");


}

