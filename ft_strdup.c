include "libft.h"
#include <stdlib.h>  // Para malloc
#include <string.h>  // Para strlen, strcpy

char *ft_strdup(const char *s) {
    int len = strlen(s) + 1;  
    char *copy = (char *)malloc(len);  
  
    if (!copy)  
        return NULL;
  
    strcpy(copy, s); 
    return copy;
}

/*#include <stdio.h>

int main() {
    char texto[] = "Hola, mundo";  // Texto original
    char *copia;
    
    copia = ft_strdup (texto);

    if (!copia) {  // Verifica si la copia falló
        printf("Error al duplicar la cadena\n");
        return 1;
    }

    printf("Original: %s\n", texto);
    printf("Copia: %s\n", copia);

    free(copia);  // Liberar memoria reservada por strdup
    return 0;
}*/
