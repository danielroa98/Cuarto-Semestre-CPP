/*
 *  Daniel Roa
 *
 *  A01021960
 *
 *  28 de febrero del 2019
 *
 *  Ejercicio c, Parte 3
 */

#include <iostream>

class ex3{
public:
    int *a;
    ex3(){};
    virtual ex3{delete a;}
        //~ex3(){delete a;}

};

class ex4: ex3{
public:
    int *a;
    ex4(){}; //correcci�n de "exe4" a "ex4"
    ~ex4(){delete a;}

};

int main(){
    ex3 *e1;
    ex3 *e2;
    e1 = new ex4;
    e2 = new ex3;

}
