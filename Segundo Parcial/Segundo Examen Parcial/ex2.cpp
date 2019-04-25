/*
 *  Daniel Roa
 *
 *  A01021960
 *
 *  28 de febrero del 2019
 *
 *  Ejercicio a, Parte 3
 */

#include <iostream>
using namespace std;

class ex2{

public:
    int *a;
    ex2(){a = new int;}
    ~ex2(){ delete a;}
};


class ex0 : public ex2{
public:
    int* alpha;
    ex0(){alpha = new int; }
    ~ex0(){delete alpha;}

};

int main(){
    ex0* nuevodemo = new ex0();
    ex2* pruebaNueva = (ex2*)nuevodemo;
    delete pruebaNueva;
}
