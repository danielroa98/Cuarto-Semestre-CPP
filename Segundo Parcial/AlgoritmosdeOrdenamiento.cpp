/*
 * Daniel Roa
 * A01021960
 * Algoritmos de ordenamiento
 */

#include <iostream>
  using namespace std;

class Ordenador {
  public:
    void Intercambia(int, int, int * );
  virtual void Ordena(int * , int);
}; //fin ORDENADOR

class Insertion: public Ordenador {

  public: void tipoInsertion(int * a, int n) {

    int contador;
    int i;
    int demo;

    for (i = 1; i < n; i++) {
      contador = a[i];
      demo = i - 1;

      while (demo >= 0 && a[demo] > contador) {
        a[demo + 1] = a[demo];
        demo--;
      } //end WHILE
      a[demo + 1] = contador;
    } //fin FOR

  }; //fin VOID tipoINSERTION
  void Ordena(int * a, int n) {
    tipoInsertion(a, n);
  } //fin VOID ORDENA
}; //fin INSERTION public ORDENADOR

class Selection: public Ordenador {

  public: void tipoSelection(int * a, int n) {

    int chico;
    int i;

    for (i = 0; i < n - 1; i++) {
      chico = i;

      for (int d = i + 1; d <= n; d++) {
        if (a[d] < a[chico]) {
          chico = d;
        } //fin IF
      } //fin FOR
      Intercambia(i, chico, a);
    } //fin FOR

  }; //fin VOID tipoSELECTION
  void Ordena(int * a, int n) {
    tipoSelection(a, n);
  } //fin VOID ORDENA
}; //fin SELECTION public ORDENADOR

class Bubble: public Ordenador {

  public:

    void tipoBubble(int * a, int n) {

      for (int c = 0; c < n - 1; c++) {
        for (int b = 0; b < n - c - 1; b++) {
          if (a[b] > a[b + 1]) {
            Intercambia(b, b + 1, a);
          } //fin IF
        } //fin FOR b
      } //fin FOR a

    }; //fin VOID tipoBUBBLE
  void Ordena(int * a, int n) {
    tipoBubble(a, n);
  } //fin VOID ORDENA
};

void Ordenador::Intercambia(int i, int j, int * arreglo) {
  int temporal = arreglo[i];
  arreglo[i] = arreglo[j];
  arreglo[j] = temporal;
} //fin ORDENADOR::INTERCAMBIA

int main() {
  //Bubble o; //Cambien por el nombre de su clase de ordenamiento
  Selection o;
  //Insertion o;

  int a[] = {5,4,3,3,1};
  o.Ordena((int * ) & a, 5);
  for (int i = 0; i < 5; i++) {
    cout << a[i] << endl;
  }

} //fin MAIN
