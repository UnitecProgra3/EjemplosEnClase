#include <iostream>

using namespace std;

class Padre
{
public:
    Padre(int x)
    {
        cout<<"Constructor del padre2"<<endl;
    }
};

class Hijo : public Padre
{
public:
};

int main()
{
    Hijo h;
    return 0;
}
