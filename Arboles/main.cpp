#include <iostream>

using namespace std;

class Nodo
{
public:
    int valor;
    Nodo* hijo_izq;
    Nodo* hijo_der;
    Nodo(int valor)
    {
        this->valor = valor;
        this->hijo_izq=NULL;
        this->hijo_der=NULL;
    }
};

class Arbol
{
public:
    Nodo* raiz;
    Arbol()
    {
        this->raiz=NULL;
        Nodo* n1 = new Nodo(1);
        Nodo* n2 = new Nodo(2);
        Nodo* n3 = new Nodo(3);
        Nodo* n4 = new Nodo(4);
        Nodo* n5 = new Nodo(5);
        Nodo* n6 = new Nodo(6);

        n1->hijo_izq = n2;
        n1->hijo_der = n3;
        n2->hijo_izq = n4;
        n2->hijo_der = n5;
        n4->hijo_izq = n6;

        raiz=n1;
    }

    void imprimir(Nodo* actual)
    {
        if(actual==NULL)
            return;
        cout<<actual->valor<<endl;
        imprimir(actual->hijo_izq);
        imprimir(actual->hijo_der);
    }

    int sumar(Nodo* actual)
    {
        if(actual==NULL)
            return 0;

        int izq = sumar(actual->hijo_izq);
        int der = sumar(actual->hijo_der);

        return actual->valor + izq + der;
    }

    bool existe(Nodo* actual, int valor_buscado)
    {

    }
};

int main()
{
    Arbol a;
    a.imprimir(a.raiz);
    cout<<a.sumar(a.raiz);

    return 0;
}
