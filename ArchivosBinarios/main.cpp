#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("archivo");
    int a = 10;
    int b = 20;
    int c = 30;
    out.write((char*)&a,4);
    out.write((char*)&b,4);
    out.write((char*)&c,4);
    out.close();

    cout<<"-----"<<endl;

    ifstream in("archivo");
    int x;
    cout<<"->"<<in.tellg()<<endl;
    in.read((char*)&x,4);
    cout<<"->"<<in.tellg()<<endl;
    cout<<x<<endl;

    return 0;
}
