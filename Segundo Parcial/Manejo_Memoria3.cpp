#include <iostream>
#include <cstring>

using namespace std;

class Objeto{
    int size;
    char* s;
    Objeto(const char*);
    Objeto(const Objeto&);
    void setS(const char*);
    ~Objeto();
};

Objeto::~Objeto(){
    free(s);
}

Objeto::Objeto(const Objeto& fuente){
    size = fuente.size;
    s = (char *)malloc(size+1);
    strcpy(s, fuente.s);
}

Objeto::Objeto(const char* a){
    size =strlen(a);
    s = (char *)malloc(size+1);
    strcpy(s, a);
}

void Objeto::setS(const char* a){
    free(s);
    size = strlen(a);
    s = (char *)malloc(size+1);
    strcpy(s,a);
}

int main(){
    Objeto o1("abc");
    Objeto o2 = o1;
    cout << o1.s << endl;
    cout << o2.s << endl;
    o2.setS("cde");
    cout << o1.s << endl;
    cout << o2.s << endl;
    ~o1();
    ~o2();
}
