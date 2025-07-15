// header de pila

#ifndef STACK_H
#define STACK_H

typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

typedef struct {
    Nodo* tope;
} Pila;

Pila* crearPila();
void push(Pila* pila, int valor);
int pop(Pila* pila);
int peek(Pila* pila);

int estaVacia(Pila* pila);
void imprimirPila(Pila* pila);
void liberarPila(Pila* pila);

#endif


