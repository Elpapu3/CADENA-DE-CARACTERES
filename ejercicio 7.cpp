#include <stdio.h>
#include <string.h>

int main() {
    char cade[20], cade2[20];
    int i, j, tam, tam2;
    int es_anagrama = 1, encon=0;

    printf("Ingrese una cadena: ");
    scanf("%s", cade);
 

    printf("Ingrese otra cadena: ");
	scanf("%s", cade2);

    
    tam = strlen(cade);
    tam2 = strlen(cade2);


    if (tam != tam2) {
        printf("Las cadenas no son anagramas.\n");
 
    }

    
    for (i = 0; i < tam; i++) {
       		 encon = 0;
        for (j = 0; j < tam2; j++) {
            if (cade[i] == cade2[j]) {
                cade2[j] = '\0'; 
                encon = 1;
                break;
            }
        }
        if (!encon) {
            es_anagrama = 0;
            break;
        }
    }

    if (es_anagrama) {
        printf("Las cadenas son anagramas.\n");
    } else {
        printf("Las cadenas no son anagramas.\n");
    }

}


