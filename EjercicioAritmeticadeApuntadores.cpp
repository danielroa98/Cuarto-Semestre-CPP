/*
 * Daniel Roa
 * A01021960
 * 12 de marzo del 2019
 * Aritmética de Apuntadores
 */

 #include <iostream>
 #include <string>

 using namespace std;

    int main(){

        int integers[] = {10,20,30,40,50,60,70,80,90,100, 110, 120, 130};
        int *pointer;
        int n;

        string message("El valor n es = ");

        pointer = integers;

        n = *pointer;
            cout << message << n << endl;

        n = *(pointer);
            cout << message << n << endl;

        n = *(pointer + 1);
            cout << message << n << endl;

        n = *pointer++;
            cout << message << n << endl;

        n = *(pointer++);
            cout << message << n << endl;

        n = *pointer+=1;
            cout << message << n << endl;

        n = *++pointer;
            cout << message << n << endl;

        n = (*pointer+1);
            cout << message << n << endl;

        n = *(++pointer);
            cout << message << n << endl;

        n = (*pointer)+1;
            cout << message << n << endl;

        n = *pointer;
            cout << message << n << endl;

        n = *(pointer+1);
            cout << message << n << endl;

        n = *(pointer++);
            cout << message << n << endl;

        n = *pointer+1;
            cout << message << n << endl;

        n = *pointer++;
            cout << message << n << endl;

        n = *pointer;
            cout << message << n << endl;


    }
