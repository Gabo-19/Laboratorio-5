// main.c
#include <stdio.h>
#include "include/arreglo_dinamico.h"
#include "include/stack.h"

int main() {
    printf("arreglo dinamico\n");
    ArregloDinamico* arr = crearArreglo(2);
    agregarElemento(arr, 10);
    agregarElemento(arr, 20);
    imprimirArreglo(arr);
    eliminarElemento(arr, 0);
    imprimirArreglo(arr);
    liberarArreglo(arr);

    printf("\nStack\n");
    Pila* pila = crearPila();
    push(pila, 1);
    push(pila, 2);
    push(pila, 3);
    imprimirPila(pila);
    pop(pila);
    imprimirPila(pila);
    liberarPila(pila);

    return 0;
}

