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
  Node(){ 
      next = nullptr; 
      }

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
    Node<T>* root;

public:
    LinkedList(){

        root = nullptr;

    }

    void add(T value){

        if(root == nullptr)
            root = new Node<T>(value);

        else{
            Node<T>* temp = traverse(root);
            temp->next = new Node<T>(value);
        }
    }

    void insert(T value, int position){
        
        Node<T>* toAdd = new Node<T>(value);
        Node<T>* temp = root;

        if (position == 0) {
            toAdd->next = root;
            root = toAdd;
            return;
        }
        
        for(int i = 0; i < position-1; i++)
        {
            if (temp->next==nullptr) {
                break;
            }else
            {
                temp=temp->next;
            }
        }
        toAdd->next=temp->next;
        temp->next=toAdd;

    }

    Node<T>* traverse(Node<T>* node){

        if(node->next == nullptr)
            return node;

        else
            return traverse(node -> next);

    }

    void printList(){
        printRecursiva(root);
    }
};

int main()
{
/*
    //Node n; Esto se crea en el stack
    //(*nodo).value = 6; Esto y lo que esta en la linea anterior son lo mismo

  Node<string>* nodo = new Node<string>(); //Esto se crean en el heap
  nodo -> value = "Hola";

  Node<string>* nodeEight = new Node<string>();
  nodeEight -> value = "mundo";
  nodo -> next = nodeEight;

  Node<string>* nodeNine = new Node<string>();
  nodeNine -> value = "!!!";
  nodeEight -> next = nodeNine;

  printRecursiva(nodo);
*/

LinkedList<int> l;
l.add(5);
l.add(4);
l.add(10);

l.insert(6, 0);

l.printList();

cout<<endl;

  return 0;
}//Close main
