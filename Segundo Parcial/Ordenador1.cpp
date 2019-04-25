#include <iostream>

using namespace std;   //utilizar para no tener que escribir siempre el STD
                      //std::cout<<a<<std::endl;

class Ordenador1{

  public:
    void Intercambia(int, int, int*); //int* es un apuntador, dirección de memoria en un int
    virtual void Ordena(int*, int);

};

  void Ordenador1::Intercambia(int i, int j, int* arreglo){
    int temporal = arreglo[i];
    arreglo[i] = arreglo[j];
    arreglo[j] = temporal;


  };

int main() {
  int a=5;
  int *b=&a;

  //int *a;
  //*a= 5;

  cout<<a<<endl;
  cout<<&a<<endl; //ubicación (dirección) de a
  cout<<b<<endl;
  cout<<*b<<endl;
  cout<<&b<<endl; //ubicacion (dirección) de b
}
