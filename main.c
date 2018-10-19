#include <stdio.h>
#include <mem.h>
#include <ctype.h>

//Clasificar los caracteres de una cadena cualquiera dada por el usuario
//en vocal, consonante, caracteres especiales y digitos
//Marco Leonardo Valencia Martinez
//A01412017@itesm.mx
int main() {
    char cadena[255];

    printf("Introduce por favor una frase o cadena\n \n");
    fgets(cadena, sizeof(cadena), stdin);

    int vocales;
    vocales = 0;
    int consonantes = 0;
    int digito = 0;
    int espacio = 0;
    int especial = 0;

    for (int i = 0; i < strlen(cadena) - 1; i++){
        if (cadena[i] == ' ' ){
            espacio++;
        }else {
            if (isdigit(cadena[i])) {
                digito++;
            } else{
                if (ispunct(cadena[i])){
                    especial++;
                }else{
                    switch(toupper(cadena[i])){
                        case 'A':
                        case 'E':
                        case 'I':
                        case 'O':
                        case 'U':
                            vocales++ ;
                        default:
                            consonantes++;
                    }
                }
            }
        }
    }

    printf("Tu cadena tiene:\n");
    printf("%i vocales\n",vocales);
    printf("%i consonantes\n", consonantes),
    printf("%i digitos\n", digito);
    printf("%i caracteres especiales\n", especial);

    return 0;
}