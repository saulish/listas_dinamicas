#include "lista_s.h"


template <typename objeto>
lista_s::lista_s(const lista_s <objeto> &rhs)
{
    //metodo de inicializacion
    for(auto &x:rhs)
    push_ba(x);
    //copy ctor
}
template <typename objeto>
lista_s::~lista_s()
{
    //dtor
}
template <typename objeto>
lista_s::lista_s(lista_s <objeto> &&rhs):head{rhs.head},tail{rhs.tail},tamanio{rhs.tamanio},capacidad{rhs.capacidad}
{
    rhs.head=nullptr;
    rhs.tail=nullptr;
    rhs.tamanio=0;
    rhs.capacidad=10000;
    //ctor
}
template <typename objeto>
lista_s& lista_s::operator=(const lista_s <objeto>& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
