#include "libft.h"
#include <stdlib.h>  // Para malloc
#include <string.h>  // Para memset

void *ft_calloc(size_t count, size_t size) {
    size_t total_size = count * size;   // 1️⃣ Calcula el espacio total necesario
    void *ptr = malloc(total_size);     // 2️⃣ Reserva la memoria

    if (!ptr) // 3️⃣ Si malloc devuelve NULL, no hay suficiente memoria
        return NULL;

    memset(ptr, 0, total_size); // 4️⃣ Llena la memoria con ceros
    return ptr; // 5️⃣ Devuelve el puntero con la memoria asignada
}


/*#include <stdio.h>

int main() {
    int *ptr;
    size_t n = 5;

    ptr = (int *)ft_calloc(n, sizeof(int)); // 1️⃣ Reserva memoria para 5 enteros

    if (!ptr) { // 2️⃣ Verifica si hubo error
        printf("Error: No se pudo asignar memoria\n");
        return (1);
    }
    printf("Valores inicializados: ");
    for (size_t i = 0; i < n; i++) { // 3️⃣ Recorre e imprime los valores
        printf("%d ", ptr[i]);  // Deben ser 0
    }
    printf("\n");
    free(ptr); // 4️⃣ Libera la memoria
    return 0;
}*/
