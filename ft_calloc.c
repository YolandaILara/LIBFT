#include "libft.h"
#include <stdlib.h>  // Para malloc
#include <string.h>  // Para memset

void *ft_calloc(size_t count, size_t size) 
{
    size_t total_size = count * size;   
    void *ptr = malloc(total_size);    

    if (!ptr) 
        return NULL;

    memset(ptr, 0, total_size); 
    return ptr; 
}

/*#include <stdio.h>

int main() 
{
    int *ptr;
    size_t n = 5;

    ptr = (int *)ft_calloc(n, sizeof(int)); 

    if (!ptr) 
    { 
        printf("Error: No se pudo asignar memoria\n");
        return (1);
    }
    printf("Valores inicializados: ");
    for (size_t i = 0; i < n; i++) { 
        printf("%d ", ptr[i]);  // Deben ser 0
    }
    printf("\n");
    free(ptr); 
    return 0;
}*/
