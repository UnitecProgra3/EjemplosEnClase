#include <iostream>

using namespace std;

bool existeCamino(char laberinto[5][5],
                    int inicio_x,int inicio_y,
                    int destino_x,int destino_y)
{
    cout<<"Test"<<endl;
    if(laberinto[inicio_y][inicio_x]=='*'
       || laberinto[destino_y][destino_x]=='*')
       return false;

    if(inicio_x<0
       || inicio_y<0
       || inicio_x>4
       || inicio_y>4
       || destino_y<0
       || destino_x>4
       || destino_y>4)
        return false;

    if(inicio_x == destino_x
       && inicio_y == destino_y)
       return true;

    if(existeCamino(laberinto,
                     inicio_x,inicio_y+1,
                     destino_x,destino_y))
        return true;

    if(existeCamino(laberinto,
                     inicio_x+1,inicio_y,
                     destino_x,destino_y))
        return true;

    if(existeCamino(laberinto,
                     inicio_x,inicio_y-1,
                     destino_x,destino_y))
        return true;

    if(existeCamino(laberinto,
                     inicio_x-1,inicio_y,
                     destino_x,destino_y))
        return true;

    return false;
}

int main()
{
    char laberinto[5][5]={
                {'*','*','_','*','*'},
                {'I','*','_','_','_'},
                {'_','*','_','*','_'},
                {'_','D','_','*','_'},
                {'_','*','_','*','_'},
                };

    cout<<laberinto[1][0]<<endl;
    cout<<laberinto[3][1]<<endl;

//    cout<<existeCamino(laberinto,
//                       0,1,
//                       1,3)<<endl;

    for(int y=0;y<5;y++)
    {
        for(int x=0;x<5;x++)
        {
            cout<<laberinto[y][x]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
