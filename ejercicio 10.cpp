#include <stdio.h>
#include <string.h>

int main() {
    char pala[20], sub_pala[20], *pos;

    printf("Ingrese una frase: ");
    fgets(pala, sizeof(pala), stdin);
    pala[strcspn(pala, "\n")] = 0;  

    printf("Ingrese la subcadena a buscar: ");
    scanf("%s", sub_pala);

    pos = strstr(pala, sub_pala);

    if (pos != NULL) {
        printf("La subcadena se encontro en la posicion: %ld\n", pos - pala);
    } else {
        printf("La subcadena no se encontro");
    }

}


