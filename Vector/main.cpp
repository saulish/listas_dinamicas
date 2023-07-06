#include <iostream>
using namespace std;
#define cap 10
template <typename objeto>
class vector_p
{
private:
    int tamanio;
    int capacidad;
    objeto* arr;

public:
    explicit vector_p(int tam = 0) :tamanio{ tam }, capacidad{ tam + cap }
    {
        arr = new objeto[capacidad];
    }
    vector_p(const vector_p& rhs) :tamanio{ rhs.tamanio }, capacidad{ rhs.capacidad }, arr{ nullptr }//COPIA DEL ARRAY
    {
        arr = new objeto[capacidad];
        for (int k = 0; k < tamanio; k++)
            arr[k] = rhs.arr[k];
    }
    vector_p(vector_p&& rhs)
    {
        rhs.tamanio = 0;
        rhs.capacidad = 0;
        rhs.arr = nullptr;
    }
    ~vector_p()
    {
        delete[]arr;
    }
    vector_p& operator= (const vector_p& rhs)
    {
        vector_p copia = rhs;
        swap(*this, copia);
        return *this;
    }
    vector_p& operator= (vector_p&& rhs)
    {
        swap(tamanio, rhs.tamanio);
        swap(capacidad, rhs.capacidad);
        swap(arr, rhs.arr);
        return *this;
    }



    objeto& operator[] (int rhs)
    {
        return arr[rhs];
    }




    void push_final(const objeto& x)
    {
        if (tamanio == capacidad)
            new_arr(2 * capacidad);//pasar a un metodo separado
        arr[tamanio] = x;
        tamanio++;
    }

    void push_final(objeto&& x)
    {
        if (tamanio == capacidad)
            new_arr(2 * capacidad);//pasar a un metodo separado
        arr[tamanio] = move(x);
        tamanio++;
    }
    void pop_final()
    {
        if (!vacia())
            tamanio--;
    }
    int vacia()
    {
        if (tamanio == 0)
            return 1;
        else
            return 0;
    }
    const objeto& peek(int x)const
    {
        return arr[x];
    }
    int tam()const
    {
        return tamanio;
    }
    int capa()const
    {
        return capacidad;
    }
    void  new_arr(int nueva_capacidad)
    {
        if (tamanio < capacidad)
            return;
        objeto* nuevo_arreglo = new objeto[nueva_capacidad];
        for (int k = 0; k < tamanio; k++)
            nuevo_arreglo[k] = arr[k];
        capacidad = nueva_capacidad;
        swap(arr, nuevo_arreglo);
        delete[]nuevo_arreglo;
    }
    void nuevo_tamanio(int nuevo_tam)
    {
        if (nuevo_tam > capacidad)
            new_arr(nuevo_tam * 2);
        tamanio = nuevo_tam;
    }

    void push_inicio(const objeto& x) {
        if (tamanio == capacidad)
            new_arr(2 * capacidad);
        for (int i = tamanio; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = x;
        tamanio++;
    }

    void push_inicio(objeto&& x) {
        if (tamanio == capacidad)
            new_arr(2 * capacidad);
        for (int i = tamanio; i > 0; i--)
            arr[i] = move(arr[i - 1]);
        arr[0] = move(x);
        tamanio++;
    }

    void peek_td() {
        for (int i = 0; i < tamanio; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    cout << "hello world" << endl;
}