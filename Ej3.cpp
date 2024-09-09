#include <iostream>
#include "Cola/Cola.h"

using namespace std;

void comparar(Cola<int> cola1, int n)
{
    Cola<int> cola2;
    int cont = 0;
    while (!cola1.esVacia())
    {
        int dato = cola1.desencolar();
        if (dato == n)
        {
            cont++;
        }
        if (cont <= 1 || dato != n)
        {
            cola2.encolar(dato);
        }
    }
    if (cont == 0)
    {
        cout << "El numero no se encuentra en la cola." << endl;
    }
    cout << "La cola final es: " << endl;
    while (!cola2.esVacia())
    {
        cout << cola2.desencolar() << endl;
    }
}
int main()
{
    Cola<int> cola1;
    int n;

    cout << "Ingrese los elementos de la cola, ingrese -1 para terminar. " << endl;
    int input;
    while (cin >> input && input != -1)
    {
        cola1.encolar(input);
    }
    cout << "Ingrese el numero que quiere eliminar luego que aparezca una vez: " << endl;
    cin >> n;

    comparar(cola1, n);
}
