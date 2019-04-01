/*
 *  Daniel Roa
 *  A01021960
 *
 *  Listas ligadas
 *
 *  Abril 1, 2019
 *
 */

#include <iostream>

class Node{
public:
    Node(){

        next = nullptr;

    }
    int value;
    Node* next;
};

int main(){

    /*
        Node n; //se crea en el stack (objeto concreto)
        n.value = 6;
     */

    Node* nodo = new Node();    //se crea en el heap
    nodo -> value = 6;          //la flecha solo es usada para acceder el contenido del apuntador

    //*node.value = 6;

    Node* nodeEight = new Node();
    nodeEight -> value = 8;
    nodo -> next = nodeEight;


}
