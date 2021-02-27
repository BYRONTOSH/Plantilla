#include <iostream>
#include "dos.h"
#include "tres.h"
#include <operaciones>
using namespace std;
using namespace datos;
using namespace algoritmo;
using namespace funciones;
int main()
{
    int A[10]= {123, -6, 13, -33, -98, 333, 23, -5, 0, -100};
    imprimirArreglo(A,9);
    cout<<"\n";
    ordenar(A,0,9);
    imprimirArreglo(A,9);
    cout<<"\n";
    nombre();
    cout<<"\n";
    cout<<suma(3,5);
    cout<<"\n";
    cout<<resta(7,5);
    return 0;

}

















