#include <iostream>
#include <list>

using namespace std;

class Numero
{
public:
    int num;
    Numero(int num)
    {
        this->num = num;
    }

    Numero operator+(Numero numero)
    {
        return num + numero.num;
    }
};

class MiCout
{
public:
    MiCout operator<<(string str)
    {
        cout<<str;
        MiCout mc;
        return mc;
    }

    MiCout operator<<(Numero numero)
    {
        cout<<numero.num;
        MiCout mc;
        return mc;
    }
};

MiCout cout2;

int main()
{
    list<int> mi_lista;
    mi_lista.push_back(10);
    mi_lista.push_back(20);
    mi_lista.push_back(30);

    for(list<int>::iterator i = mi_lista.begin();
        i!=mi_lista.end();
        i++)
    {
        cout<<*i<<endl;
    }


    return 0;
}
