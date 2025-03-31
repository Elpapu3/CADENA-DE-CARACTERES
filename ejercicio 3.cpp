#include <stdio.h>
#include <string.h>

int main() {
    char pala[20];
    int lon, i, es_pali = 1;

    printf("Ingrese la cadena: ");
    scanf("%s", pala);  
    
    lon = strlen(pala);
    
    for (i = 0; i < lon / 2; i++) {
        if (pala[i] != pala[lon - i - 1]) {
            es_pali = 0; 
            break;
        }
    }

    if (es_pali) {
        printf("La cadena es un palindromo\n");
    } else {
        printf("La cadena no es un palindromo\n");
    }

}

