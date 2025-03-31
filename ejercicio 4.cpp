#include <stdio.h>
#include <string.h>
int main() {
	char pala [20], cara, rem;
	int i, longi;
	printf("ingrese una palabra: ");
	scanf("%s", pala);

	printf("ingrese el caracter a remplazar: ");
	scanf(" %c", &rem);

	printf("ingrese porque caracter se va a remplazar: ");
	scanf(" %c", &cara);
	
	longi = strlen(pala);
	
		for(i=0; i<longi; i++){
			
			if(pala[i] == rem){
				pala[i] = cara;
			}
		}
	printf("la palbra mopdificada es %s", pala);

}

