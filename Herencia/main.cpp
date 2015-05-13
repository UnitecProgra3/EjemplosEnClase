#include <iostream>
#include <vector>

using namespace std;

class Personaje
{
public:
    int hp;
    int ataque;
    string instance_of;

    Personaje()
    {
        instance_of = "Personaje";
    }

    void logica();

    string instanceOf()
    {
        return instance_of;
    }

    virtual void dibujar() = 0;
};

class Arquero : public Personaje
{
public:

    Arquero()
    {
        instance_of = "Arquero";
    }

    void dibujar()
    {
        cout<<"Shoosh"<<endl;
    }

    string instanceOf()
    {
        return "Arquero";
    }
};

class Guerrero : public Personaje
{
public:

    Guerrero()
    {
        instance_of = "Guerrero";
    }

    void dibujar()
    {
        cout<<"Wraaar"<<endl;
    }
};

class Mago : public Personaje
{
public:
    Mago()
    {
        instance_of = "Mago";
    }

    void dibujar()
    {
        cout<<"Pirrin!"<<endl;
    }
};

int main()
{
    vector<Personaje*> personajes;

    personajes.push_back(new Arquero());
    personajes.push_back(new Arquero());
    personajes.push_back(new Arquero());
    personajes.push_back(new Mago());
    personajes.push_back(new Guerrero());
    personajes.push_back(new Mago());
    personajes.push_back(new Arquero());
    personajes.push_back(new Guerrero());
    personajes.push_back(new Guerrero());
    personajes.push_back(new Mago());
    personajes.push_back(new Guerrero());

    for(int i=0; i<personajes.size();i++)
    {
        personajes[i]->dibujar();
    }

    return 0;
}



