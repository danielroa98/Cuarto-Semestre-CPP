/*Sebastian Gonzalo Vives Faus
A01025211
~ 3/26/2019
*/
#include <iostream>
using namespace std;

class Ordenador{
public:
void Intercambia(int, int, int*);
void print(int*);
void randomize(int*);
virtual void Ordena(int*, int){};
};

class Bubble:public Ordenador{
public:
   void BubbleSort(int* arr, int n){
   int i, j,aux;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1]){
              Intercambia(j,j+1,arr);
           }
};
    void Ordena(int* arr, int n){
        cout<<"Bubble Sort: "<<endl;
        BubbleSort(arr, n);
        print(arr);
    };

};

class Selection:public Ordenador{
    public:
    void SelectionSort(int* arr, int n){
        int minimo;
        for(int i = 0; i<n-1;i++){
            minimo = i;
            for(int j = i+1; j<n; j++){
                if(arr[j]<arr[minimo]){
                    minimo = j;
                }//end if
            }//end for
            Intercambia(i, minimo, arr);
        }//end for
    };//end SelectionSort
    void Ordena(int* arr, int n){
        cout<<"Selection Sort"<<endl;
        SelectionSort(arr,n);
        print(arr);
    };
};

class Insertion: public Ordenador{
public:
    void InsertionSort(int* arr, int n){
        int temporal,j;
        for(int i=1; i<n; i++){
                temporal = arr[i];
                j = i-1;
        while(j>=0 && arr[j]>temporal){
            arr[j+1] = arr[j];
            j--;
        }//end while
        arr[j+1] = temporal;
        }//end for
    };
    void Ordena(int* arr, int n){
        cout<<"Insertion Sort"<<endl;
        InsertionSort(arr,n);
        print(arr);
    };
};


void Ordenador::Intercambia(int i, int j, int* arreglo){
int temporal=arreglo[i];
arreglo[i]=arreglo[j];
arreglo[j]=temporal;
}

void Ordenador::print(int* arr){
    cout<<"[ ";
   for(int i =0; i<10; i++){
    cout<<arr[i]<<" ";
   }
    cout<<"]"<<endl;
}

void Ordenador::randomize(int* arr){
    int random;
    for(int i=0;i<10;i++){
    random = rand() % 9+1;
    Intercambia(i,random,arr);
   }

   cout<<"New Array"<<endl;
    print(arr);
}

int main(){

    int random;
    Bubble o;
    Selection o1;
    Insertion o2;
    int a[]={4,7,6,1,10,2,5,3,8,9};

    cout<<"Initial Array"<<endl;
   o.print(a);
   o.Ordena((int *)&a, 10);

//De-Sort the array
    o.randomize(a);
  o1.Ordena((int *)&a,10);

  o2.randomize(a);
  o2.Ordena((int *)&a,10);



}
