#include <iostream>

using namespace std;

class Sort{

public:
  virtual int* sort(int* array, int size) = 0; //metodo abstracto

};//fin SORT

class Merge : public Sort{

  public:
    int* sort(int* array, int size);

};//fin MERGE

int* Merge::sort(int* array, int size){

  if (size == 1)
    return array;

  else
  {
    int size1 = size/2;
    int size2 = size - size/2;
    int* arr1 = new int[size1];
    int* arr2 = new int [size2];

    for (int i = 0; j = 0; i++) {
      if (i < size1)
        arr1[i] = array[i];

      else
        arr2[j++] = array[i];
    }//fin for

    int* merged1 = sort(arr1, size1);
    int* merged2 = sort(arr2, size2);

    return merge(merged1, size1, merged2, size2);
  }

}//fin implementación
