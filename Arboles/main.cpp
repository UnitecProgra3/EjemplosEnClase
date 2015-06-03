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
//        Nodo* n15 = new Nodo(15);
//        Nodo* n6 = new Nodo(6);
//        Nodo* n4 = new Nodo(4);
//        Nodo* n5 = new Nodo(5);
//        Nodo* n7 = new Nodo(7);
//        Nodo* n23 = new Nodo(23);
//        Nodo* n71 = new Nodo(71);
//        Nodo* n50 = new Nodo(50);
//
//        n15->hijo_izq = n6;
//        n15->hijo_der = n23;
//        n6->hijo_izq = n4;
//        n6->hijo_der = n7;
//        n4->hijo_der = n5;
//        n23->hijo_der = n71;
//        n71->hijo_izq = n50;
//
//        raiz=n15;
    }

    void agregar(Nodo* nuevo)
    {
        agregar(&raiz,nuevo);
    }

    void agregar(Nodo* actual,Nodo* nuevo)
    {
        if(nuevo->valor<actual->valor)
        {
            if(actual->hijo_izq==NULL)
            {
                actual->hijo_izq = nuevo;
            }else
            {
                agregar(actual->hijo_izq,nuevo);
            }
        }else
        {
            if(actual->hijo_der==NULL)
            {
                actual->hijo_der=nuevo;
            }else
            {
                agregar(actual->hijo_der,nuevo);
            }
        }
    }

    void agregar(Nodo** actual,Nodo* nuevo)
    {
        if(*actual==NULL)
        {
            *actual=nuevo;
        }else
        {
            if(nuevo->valor<(*actual)->valor)
            {
                if((*actual)->hijo_izq==NULL)
                {
                    (*actual)->hijo_izq = nuevo;
                }else
                {
                    agregar((*actual)->hijo_izq,nuevo);
                }
            }else
            {
                if((*actual)->hijo_der==NULL)
                {
                    (*actual)->hijo_der=nuevo;
                }else
                {
                    agregar((*actual)->hijo_der,nuevo);
                }
            }
        }
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

    bool buscar(Nodo* actual, int valor_buscado)
    {
        if(actual==NULL)
            return false;

        cout<<"Buscando"<<endl;

        if(actual->valor==valor_buscado)
            return true;

        if(buscar(actual->hijo_izq,valor_buscado))
            return true;

        if(buscar(actual->hijo_der,valor_buscado))
            return true;

        return false;
    }

    bool buscarAVL(Nodo* actual, int valor_buscado)
    {
        if(actual==NULL)
            return false;

        cout<<"Buscando AVL"<<endl;

        if(actual->valor == valor_buscado)
            return true;

        if(actual->valor < valor_buscado)
            return buscarAVL(actual->hijo_der,valor_buscado);

        return buscarAVL(actual->hijo_izq,valor_buscado);

    }
};

int main()
{
    Arbol a;
    a.agregar(new Nodo(15));
    a.agregar(new Nodo(6));
    a.agregar(new Nodo(4));
    a.agregar(new Nodo(5));
    a.agregar(new Nodo(7));
    a.agregar(new Nodo(23));
    a.agregar(new Nodo(71));
    a.agregar(new Nodo(50));

    a.imprimir(a.raiz);
    cout<<a.buscar(a.raiz,50)<<endl;
    cout<<a.buscarAVL(a.raiz,50)<<endl;

    return 0;
}
