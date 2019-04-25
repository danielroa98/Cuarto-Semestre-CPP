#include <iostream>
using namespace std;

template<class T>
class Node
{
public:
	T value;
    Node<T>* next;
    Node(){
		next = NULL; 
	}
	Node(T v){
		value=v;
		next=NULL;
	}
    
};
template<class T>
void printNormal(Node<T>* node)
{
    Node<T>* temp = node;
    while(temp != NULL)
    {
        cout<< temp->value << " ";
        temp = temp->next;
    }
}

template<class T>
void recursivePrint(Node<T>* node)
{
    if(node == NULL)
        return; 
    else
    {
        cout << node->value<<",";
        return recursivePrint(node->next);
    }
}

template<class T>
class LinkedList
{
protected:
    Node<T>* root;
public:
    LinkedList()
    {
        root = NULL;
    }

    void add(Node<T>* node)
    {
        if(root == NULL)
            root = node;
        else
        {
            Node<T>* temp = traverse(root);
            temp->next = node;
        }
    }
	
	void add(T value)
    {
        if(root == NULL)
            root = new Node<T>(value);
        else
        {
            Node<T>* temp = traverse(root);
            temp->next = new Node<T>(value);
        }
    }