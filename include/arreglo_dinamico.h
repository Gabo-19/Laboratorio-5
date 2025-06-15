// header de arrgelo dinamico




#ifndef ARREGLO_DINAMICO_H
#define ARREGLO_DINAMICO_H

typedef struct {
    int *datos;
    int capacidad;
    int longitud;
} ArregloDinamico;

ArregloDinamico* crearArreglo(int capacidadInicial);
void agregarElemento(ArregloDinamico* arr, int valor);

void eliminarElemento(ArregloDinamico* arr, int indice);
int obtenerElemento(ArregloDinamico* arr, int indice);
void imprimirArreglo(ArregloDinamico* arr);
void liberarArreglo(ArregloDinamico* arr);

#endif
