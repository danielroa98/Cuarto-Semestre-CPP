/*
 * Daniel Roa
 * A01021960
 * 11 de marzo del 2019
 * Función que reservará la memoria dinámica
 */

#include <iostream>

using namespace std;

class Memory{

  public:
    void reserveByAddress(int** var, int size);
    void reserveByReference(int*& var, int& size);

};

void Memory::reserveByReference(int*& var, int& size){
  var = new int[size];
  size = 22;
}

void Memory::reserveByAddress(int** var, int size){
  *var = new int[size];
}

int main() {
  int* pointer;
  int size = 2;
  Memory m;                   //para declarar memoria en el stack
  //Memory* mm;               //para declarar memoria en el heap
  m.reserveByAddress(&pointer, size);  //& = da la dirección -- * = accede a la direccion
  delete[]pointer;
  m.reserveByReference(pointer, size);

  pointer[0] = 10;

  cout << size;
  delete[]pointer;
}
