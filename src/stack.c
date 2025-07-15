// fuente

#include <stdio.h>
#include <stdlib.h>
#include "../include/stack.h"

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
    if (pila->tope == NULL) return -1;
    Nodo* temp = pila->tope;
    int valor = temp->dato;
    pila->tope = temp->siguiente;
    free(temp);
    return valor;
}

int peek(Pila* pila) {
    return pila->tope ? pila->tope->dato : -1;
}

int estaVacia(Pila* pila) {
    return pila->tope == NULL;
}

void imprimirPila(Pila* pila) {
    Nodo* actual = pila->tope;
    while (actual) {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");
}

void liberarPila(Pila* pila) {
    while (!estaVacia(pila)) {
        pop(pila);
    }
    free(pila);
}
