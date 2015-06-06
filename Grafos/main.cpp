#include <iostream>
#include <list>

using namespace std;

class Nodo
{
public:
    list<Nodo*>adyacentes;
    int valor;
    Nodo(int valor)
    {
        this->valor = valor;
    }
    Nodo* getAdyacente(int pos)
    {
        list<Nodo*>::iterator i=adyacentes.begin();
        for(int j=0;j<pos;j++)
            i++;
        return *i;
    }
};

int main()
{
    Nodo* n1 = new Nodo(1);
    Nodo* n2 = new Nodo(2);
    Nodo* n3 = new Nodo(3);
    Nodo* n4 = new Nodo(4);

    n1->adyacentes.push_back(n2);
    n1->adyacentes.push_back(n3);
    n1->adyacentes.push_back(n4);

    n2->adyacentes.push_back(n3);

    n3->adyacentes.push_back(n4);

    cout<<n1->getAdyacente(0)->valor<<endl;
    cout<<n1->getAdyacente(0)->
        getAdyacente(0)->valor<<endl;
    cout<<n1->getAdyacente(0)->
        getAdyacente(0)->
        getAdyacente(0)->
        valor<<endl;
    cout<<n1->getAdyacente(1)->
        getAdyacente(0)->
        valor<<endl;
cout<<n1->getAdyacente(2)->
        valor<<endl;

    return 0;
}
