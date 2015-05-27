#include <iostream>

using namespace std;

bool estaEncendido(char valor, int posicion)
{
    char mascara = 1;
    mascara = mascara<<posicion;
    return valor&mascara;
}

void imprimirEnBinario(char valor)
{
    for(int i=7;i>=0;i--)
    {
        cout<<estaEncendido(valor,i);
    }
    cout<<endl;
}

int main()
{
    imprimirEnBinario(5);
    imprimirEnBinario(1);
    imprimirEnBinario(9);
    imprimirEnBinario(15);
    imprimirEnBinario(255);
    imprimirEnBinario(152);
    return 0;
}
