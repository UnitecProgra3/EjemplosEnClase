#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<string,int>mi_mapa;
    mi_mapa.insert(pair<string,int>("A",10));
    mi_mapa.insert(pair<string,int>("B",20));
    mi_mapa.insert(pair<string,int>("C",30));
    mi_mapa.insert(pair<string,int>("A",15));

    for(map<string,int>::iterator i=mi_mapa.begin();
        i!=mi_mapa.end();
        i++)
        cout<<i->first<<","<<i->second<<endl;

    return 0;
}
