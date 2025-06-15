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

#endif
