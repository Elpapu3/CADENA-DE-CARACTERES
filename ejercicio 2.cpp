#include <stdio.h>
#include <string.h>
int main() {
	int i, longi, cont=0;
	char cara_us [100];
	char bus= 'a';
	
	printf("ingrese una palabra: ");
	scanf("%s", cara_us);
		longi = strlen(cara_us);
	for (i=0; i<longi;i++){
		if (cara_us[i] == 'a' || cara_us[i] == 'e' || cara_us[i] == 'i' || cara_us[i] == 'o' || cara_us[i] == 'u'|| cara_us[i] == 'A' || cara_us[i] == 'E' || cara_us[i] == 'I' || cara_us[i] == 'O' || cara_us[i] == 'U'){
			cont++;
		}
	}
	printf("La palabra conbtiene %i de cada una de las vocales juntas", cont);{
	}


}


