/*
 * Daniel Roa
 *
 * A01021960
 *
 * Algoritmo tipo quick sort
*/

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
    arreglo[j] = temporal;
  }

void Ordenador::printArray(int* array, int size)
{

  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
    cout << endl;
  }

};

class Quicksort: public Ordenador{
public:
  void Ordenar(int*, int);

private:
  void sort(int*, int, int);
  int partition(int*, int, int);
};

void Quicksort::Ordenar(int* arreglo, int n){
  sort(arreglo, 0, n-1);
}

void Quicksort::sort(int* arreglo, int low, int high){
  if (high <= low) {
    return;
  }

  int j = partition(arreglo, low, high);
};

int Quicksort::partition(int* arreglo, int low, int high){
  int v = arreglo[low];
  int i = low + 1;
  int j = high;

  while (true) {
    while (arreglo[i] < v) {
      i++;
    }
    while (arreglo[j] > v) {
      j--;
    }
    if (j <= i) {
      break;
    }
    Intercambia(arreglo, i, j);

  }//fin while

  Intercambia(arreglo, low, j);
  return j;
}//fin partition

int main(){
  Quicksort a;
  int arreglo[5] = {5,4,3,2,1};
  a.Ordenar((int*)&arreglo, 5);
  a.printArray((int*)&arreglo, 5);
}
