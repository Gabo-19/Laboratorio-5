// fuente

#include <stdlib.h>
#include "stack.h"

Pila* crearPila() {
    Pila* pila = malloc(sizeof(Pila));
    pila->tope = NULL;
    return pila;
}

void push(Pila* pila, int valor) {
    Nodo* nuevo = malloc(sizeof(Nodo));
    nuevo->dato = valor;
    nuevo->siguiente = pila->tope;
    pila->tope = nuevo;
}

int pop(Pila* pila) {
    if (!pila->tope) return -1;
    Nodo* temp = pila->tope;
    int valor = temp->dato;
    pila->tope = temp->siguiente;
    free(temp);
    return valor;
}

int peek(Pila* pila) {
    return pila->tope ? pila->tope->dato : -1;
}
