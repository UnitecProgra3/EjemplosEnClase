#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("archivo");
    string str = "764";
    out<<str<<"\t";
    out<<12<<endl;
    out<<true<<endl;
    out<<false<<endl;
    out<<'5'<<endl;
    out<<43.3<<endl;
    out.close();

    ifstream in("archivo");

    string leida;
    while(in>>leida)
    {
        cout<<"->"<<leida<<endl;
    }

    in.close();

    return 0;
}
