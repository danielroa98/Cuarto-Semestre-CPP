#include <iostream>

using namespace std;

class Ordenador{

public:
    virtual void Ordenar(int*, int)=0;
    void Intercambia(int*, int, int);
    void printArray(int*, int);
};//fin clase Ordenador

void Ordenador::Intercambia(int* arreglo, int i, int j)
  {
    int temporal = arreglo[i];
    arreglo[i] = arreglo[j];
    arreglo[j] = temporal:
  };

void Ordenador::printArray(array, size)
{

  for (int i = 0; i < count; i++) {
    cout << array[i] << " ";
    cout << endl;
  }

};

class
