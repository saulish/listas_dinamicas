#ifndef LISTA_S_H
#define LISTA_S_H
using namespace std;

template <typename objeto>
class lista_s
{
    public:
        lista_s(const lista_s <objeto> &rhs);
        virtual ~lista_s();
        lista_s(const lista_s <objeto> &&rhs);
        lista_s& operator=(const lista_s & rhs);

    protected:

    private:
        struct nodo
        {
            objeto dato;
            nodo *next;
            nodo (const objeto &d=objeto{}, nodo *n=nullptr):dato{d},next{n}
            {}
            nodo (objeto &&d=objeto{}, nodo *n=nullptr):dato{move(d)},next{move(n)}
            {}
        };
        nodo *head;
        nodo *tail;
        int tamanio;
        int capacidad;
};

#endif // LISTA_S_H
