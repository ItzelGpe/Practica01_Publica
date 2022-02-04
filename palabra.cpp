#include <stdio.h> 
#include <string.h> 


int Palindromo(char * cadena, int inicio, int fin) {

    if (inicio >= fin) 
	return 1;
	 printf("Comparando la %c con %c\n", cadena[inicio], cadena[fin]);
	 
    if (cadena[inicio] == cadena[fin]) {
        return Palindromo(cadena, inicio + 1, fin - 1);
    } else {
        return 0;
    }
}


int main() {
    
    char cadena[50];
    printf("Escribe una palabra para verificar si es palindromo o no\n");
    scanf("%s", &cadena);

    int tamanoDeCadena = strlen(cadena);    //Tamano de la cadena
    int resultado = Palindromo(cadena, 0, tamanoDeCadena - 1);
    if (resultado==1) {
        printf("%s Es palindromo\n", cadena);
    } else {
        printf("%s NO es palindromo\n", cadena);
    }

}






