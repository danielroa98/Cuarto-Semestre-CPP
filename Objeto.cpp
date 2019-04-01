#include <iostream>
#include <cstring>

using namespace std;

class Objeto{

public:
    int size;
    char* s;
    Objeto(const char*);
    //void changeSize(int);
    //void changeSize(char*);

};

Objeto::Objeto(const char * a){
    char*s = "abc";
    size = strlen(a);
    s=(char *)malloc(size+1);
    strcpy(s,a);
}

/*void Objeto::changeSize(int a){
    size=a;
}*/

/*void Objeto::changS(char* a){
    s=*a;
}*/

int main(){

    Objeto o("abc");
    //Objeto o;
    //o.size=5;
    //Objeto * op=&o;

    //cout <<op->size<<endl;
}
