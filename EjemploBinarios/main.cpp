#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Score
{
public:
    string nombre;
    int puntaje;
    Score(string nombre,int puntaje)
    {
        this->nombre=nombre;
        this->puntaje=puntaje;
    }
};

void escribir(vector<Score*>scores,string nombre_archivo)
{
    ofstream out(nombre_archivo.c_str());
    for(int i=0;i<scores.size();i++)
    {
        out.write(scores[i]->nombre.c_str(),30);
        out.write((char*)&scores[i]->puntaje,4);
    }
    out.close();
}

vector<Score*> leer(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());
    vector<Score*>scores;
    in.seekg(0,ios::end);
    int tamano_archivo = in.tellg();
    in.seekg(0);
    while(in.tellg()<tamano_archivo)
    {
        char* nombre=new char[30];
        int puntaje;
        in.read(nombre,30);
        in.read((char*)&puntaje,4);
        Score *s=new Score(nombre,puntaje);
        scores.push_back(s);
    }
    return scores;
}

void editar(string nombre_archivo, int posicion, int puntaje_nuevo)
{
    ofstream out(nombre_archivo.c_str(),ios::in);
    out.seekp(posicion*34+30);
    out.write((char*)&puntaje_nuevo,4);
    out.close();
}

int main()
{
    vector<Score*>scores;
    scores.push_back(new Score("lolo",10));
    scores.push_back(new Score("lala",20));
    scores.push_back(new Score("ruro",30));

    escribir(scores,"archivo");

    editar("archivo",1,50);

    vector<Score*>scoresl=leer("archivo");
    for(int i=0;i<scoresl.size();i++)
    {
        cout<<scoresl[i]->nombre<<endl;
        cout<<scoresl[i]->puntaje<<endl;
    }
    return 0;
}
