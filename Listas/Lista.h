#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

template <typename Tipo>
class Lista
{
    public:
        Nodo<Tipo>* inicio;
        Lista()
        {
            inicio = NULL;
        }
        void agregar(Tipo valor)
        {
            Nodo<Tipo>* nuevo = new Nodo<Tipo>(valor);

            if(inicio==NULL)
            {
                inicio = nuevo;
            }else
            {
                Nodo<Tipo>* temp = inicio;
                while(temp->sig!=NULL)
                {
                    temp = temp->sig;
                }
                temp->sig = nuevo;
            }
        }
        void imprimir()
        {
            Nodo<Tipo>* temp = inicio;
            while(temp!=NULL)
            {
                cout<<temp->valor<<endl;
                temp = temp->sig;
            }
        }
        virtual ~Lista()
        {

        }
    protected:
    private:
};

#endif // LISTA_H
