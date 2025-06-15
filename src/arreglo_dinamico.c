// archivo de arreglo dinamico



#include <stdio.h>
#include <stdlib.h>
#include "../include/arreglo_dinamico.h"

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

void eliminarElemento(ArregloDinamico* arr, int indice) {
    if (indice < 0 || indice >= arr->longitud) return;
    for (int i = indice; i < arr->longitud - 1; i++) {
        arr->datos[i] = arr->datos[i + 1];
    }
    arr->longitud--;
}

int obtenerElemento(ArregloDinamico* arr, int indice) {
    if (indice < 0 || indice >= arr->longitud) return -1;
    return arr->datos[indice];
}

void imprimirArreglo(ArregloDinamico* arr) {
    printf("[ ");
    for (int i = 0; i < arr->longitud; i++) {
        printf("%d ", arr->datos[i]);
    }
    printf("]\n");
}

void liberarArreglo(ArregloDinamico* arr) {
    free(arr->datos);
    free(arr);
}
