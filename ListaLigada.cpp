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
using namespace std;

template<class T>
class Node
{
public:
  Node()
    { next = nullptr; }

    //next = nullptr;

    T value;
    Node<T>* next;
};

template<class T>
void printNormal(Node<T>* node){

    Node<T>* temp = node;

    while(temp != nullptr){
        cout<< temp->value<<" ";
        temp = temp -> next;

    }

}

template<class T>
void printRecursiva(Node<T>* node){

    if(node == nullptr){
        return;
    }

    else{
        cout<<node->value<<" ";
        return printRecursiva(node->next);
    }
}

template<class T>
class LinkedList{

protected:
    Node* root;

public:
    LinkedList(){

        root = nullptr;

    }

    void add(Node<T>* node){

        if(root == nullptr)
            root = node;

        else{
            Node<T>* temp = traverse(root);
            temp->next = node;
        }
    }

    Node<T>* traverse(Node<T>* node){

        if(node->next == nullptr)
            return node;

        else
            return traverse(node -> next);

    }
};

int main()
{
    //Node n; Esto se crea en el stack
    //(*nodo).value = 6; Esto y lo que esta en la linea anterior son lo mismo

  Node<char>* nodo = new Node<char>(); //Esto se crean en el heap
  nodo -> value = George_;

  Node<char>* nodeEight = new Node<char>();
  nodeEight -> value = se_la_;
  nodo -> next = nodeEight;

  Node<char>* nodeNine = new Node<char>();
  nodeNine -> value = come;
  nodeEight -> next = nodeNine;

  printRecursiva(nodo);

  return 0;
}//Close main
