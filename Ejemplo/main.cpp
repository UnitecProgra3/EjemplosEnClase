#include <iostream>

using namespace std;

class MiClase
{
public:
    int x;
    int miFuncion()
    {
        cout<<"Test"<<endl;
    }
};

int main()
{
    MiClase mi_clase;
    mi_clase.x = 10;
    cout<<mi_clase.x<<endl;
    mi_clase.miFuncion();

    MiClase *mi_clase_ptr = new MiClase();
    mi_clase_ptr->x = 10;
    cout<<(*mi_clase_ptr).x<<endl;
    (*mi_clase_ptr).miFuncion();

    return 0;
}
