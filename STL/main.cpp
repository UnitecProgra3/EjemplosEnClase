#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char,string> mi_mapa;
    mi_mapa['a']="Hola";
    mi_mapa['b']="Mundo";
    mi_mapa['c']="Prueba";

    cout<<mi_mapa['a']<<endl;
    cout<<mi_mapa['b']<<endl;
    cout<<mi_mapa['c']<<endl;

    return 0;
}
