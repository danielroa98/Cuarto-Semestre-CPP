/*
 *  Daniel Roa
 *
 *  A01021960
 *
 *  28 de febrero del 2019
 *
 *  Ejercicio b, Parte 3
 */

#include <iostream>
#include <cstring>

class ex1{
public:
    char *A;
    ex1(const char*);
    void setA(const char*);
    ~ex1(){free (A); }

};

ex1::ex1(const char* b){ //consturctor
    A = (char *)malloc(strlen(b)+1);
    strcpy(A,b);
}

void ex1::setA(const char* b){ //creación de los datos dentro del void setA
    A = (char *)malloc(strlen(b)+1);
    strcpy(A,b);
}

