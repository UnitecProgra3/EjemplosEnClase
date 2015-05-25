#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("archivo");
    string *str = new string("Hola");
    out.write((char*)str,4);

    return 0;
}
