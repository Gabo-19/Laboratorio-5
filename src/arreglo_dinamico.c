// archivo de arreglo dinamico



#include <stdlib.h>
#include "arreglo_dinamico.h"

ArregloDinamico* crearArreglo(int capacidadInicial) {
    ArregloDinamico* arr = malloc(sizeof(ArregloDinamico));
    arr->datos = malloc(sizeof(int) * capacidadInicial);
    arr->capacidad = capacidadInicial;
    arr->longitud = 0;
    return arr;
}

void agregarElemento(ArregloDinamico* arr, int valor) {
    if (arr->longitud == arr->capacidad) {
        arr->capacidad *= 2;
        arr->datos = realloc(arr->datos, arr->capacidad * sizeof(int));
    }
    arr->datos[arr->longitud++] = valor;
}
