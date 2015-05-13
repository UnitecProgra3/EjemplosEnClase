#include <iostream>
#include <list>
#include "Lista.h"

using namespace std;


int main()
{
    Lista<int> mi_lista;

    mi_lista.agregar(10);
    mi_lista.agregar(20);
    mi_lista.agregar(30);

    mi_lista.imprimir();

    Lista<string> mi_lista2;

    mi_lista2.agregar("Ejemplo");
    mi_lista2.agregar("Prueba");
    mi_lista2.agregar("Hola");

    mi_lista2.imprimir();

    return 0;
}
