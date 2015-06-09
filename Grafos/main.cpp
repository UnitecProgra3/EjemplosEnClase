#include <iostream>
#include <list>

using namespace std;

class Nodo
{
public:
    list<Nodo*>adyacentes;
    int valor;
    bool marcado;
    Nodo(int valor)
    {
        this->valor = valor;
        this->marcado = false;
    }
    Nodo* getAdyacente(int pos)
    {
        list<Nodo*>::iterator i=adyacentes.begin();
        for(int j=0;j<pos;j++)
            i++;
        return *i;
    }
};

class Grafo
{
public:
    Nodo* inicio;
    Grafo()
    {
        Nodo* n1 = new Nodo(1);
        Nodo* n2 = new Nodo(2);
        Nodo* n3 = new Nodo(3);
        Nodo* n4 = new Nodo(4);

        n1->adyacentes.push_back(n2);
        n1->adyacentes.push_back(n3);

        n2->adyacentes.push_back(n3);

        n3->adyacentes.push_back(n4);

        n4->adyacentes.push_back(n1);

        inicio=n1;
    }
    void imprimir()
    {
        imprimir(inicio);
    }
    void imprimir(Nodo*actual)
    {
        if(actual->marcado)
            return;
        actual->marcado=true;
        cout<<actual->valor<<endl;
        for(int i=0;i<actual->adyacentes.size();i++)
        {
            imprimir(actual->getAdyacente(i));
        }
    }

    void imprimirAProfundidad(Nodo*actual, int profundidad)
    {
        if(profundidad<0)
            return;
        cout<<actual->valor<<endl;
        for(int i=0;i<actual->adyacentes.size();i++)
        {
            imprimirAProfundidad(actual->getAdyacente(i),profundidad-1);
        }
    }
};

int main()
{
    Grafo g;
    g.imprimir();
    cout<<"Profundidad 0"<<endl;
    g.imprimirAProfundidad(g.inicio,0);
    cout<<"Profundidad 1"<<endl;
    g.imprimirAProfundidad(g.inicio,1);
    cout<<"Profundidad 2"<<endl;
    g.imprimirAProfundidad(g.inicio,2);



//    cout<<n1->getAdyacente(0)->valor<<endl;
//    cout<<n1->getAdyacente(0)->
//        getAdyacente(0)->valor<<endl;
//    cout<<n1->getAdyacente(0)->
//        getAdyacente(0)->
//        getAdyacente(0)->
//        valor<<endl;
//    cout<<n1->getAdyacente(1)->
//        getAdyacente(0)->
//        valor<<endl;
//    cout<<n1->getAdyacente(2)->
//        valor<<endl;

    return 0;
}
