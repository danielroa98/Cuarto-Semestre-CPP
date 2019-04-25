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
class CircularLinkedList
{
protected:
    Node<T>* root;
public:
    CircularLinkedList()
    {
        root = NULL;
    }

    void add(Node<T>* node)
    {
        if(root == NULL)
            root = node;
            root -> next = root;
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