#include <iostream>
#include <cstring>

using namespace std;

class B{

public:
    string s;
    B();
    B(string);
};

B::B(){
}

B::B(string e){
    s=e;
}

int main(){
    B a1[10];//("abc");

    a1[0].s = "abc";
    a1[1].s = "cde";

    cout << a1[0].s << endl;
    cout << a1[1].s << endl;
    cout << a1[2].s << endl;

}
