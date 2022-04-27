#include "EjerciciosListas.h"

// **** INICIO Funciones Auxiliares ****
void insertComienzo(NodoLista *&l, int e) {
    NodoLista* nuevo = new NodoLista;
    nuevo->dato = e;
    nuevo->sig = l;
    l = nuevo;
}
void insertFin(NodoLista*& l, int e) {
    if (l == NULL) {
        insertComienzo(l, e);
    }
    else
        insertFin(l->sig,e);
}

// ****   FIN Funciones Auxiliares  ****

NodoLista* invertirParcial(NodoLista* l) {
    // IMPLEMENTAR SOLUCION
    NodoLista* aux;
    NodoLista* inv = NULL;
    while (l->sig != NULL) {
        aux = new NodoLista;
        aux->dato = l->dato;
        aux-> sig = inv;
        inv = aux;
        l = l->sig;
    }
    return inv;
}

void eliminarNesimoDesdeElFinal(NodoLista*& lista, int &n) {
	// IMPLEMENTAR SOLUCION
    if (lista != NULL) {
        
    }
    
}

NodoLista* listaOrdenadaInsertionSort(NodoLista* l) 
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

void listaOrdenadaSelectionSort(NodoLista*& l)
{
	// IMPLEMENTAR SOLUCION
}

NodoLista* intercalarIter(NodoLista* l1, NodoLista* l2)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

NodoLista* intercalarRec(NodoLista* l1, NodoLista* l2)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

NodoLista* insComFin(NodoLista* l, int x)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

NodoLista* exor(NodoLista* l1, NodoLista* l2)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

void eliminarDuplicadosListaOrdenadaDos(NodoLista*& l) 
{
	// IMPLEMENTAR SOLUCION
}

bool palindromo(NodoLista* l)
{
	// IMPLEMENTAR SOLUCION
	return false;
}

void eliminarSecuencia(NodoLista* &l, NodoLista* secuencia) 
{
	// IMPLEMENTAR SOLUCION
}

void moverNodo(NodoLista* &lista, unsigned int inicial, unsigned int final)
{
	// IMPLEMENTAR SOLUCION
}
