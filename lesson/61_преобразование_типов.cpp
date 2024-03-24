#include <iostream>
using namespace std;

/*
Преобразование типов
*/

int main() {
     double a = 12.1;
     double b = 21.9;
     double c = 0.0;
     double d = -1.2;

     cout << (int)a << " " << (int)b << endl;                         //12 21

     cout << (bool)a << " " << (bool)c << " " << (bool)d << endl;     //1 0 1

     cout << (char)(int)a << endl;                                    //
     cout << (char)a << endl;                                         //


     //Неявные преобразования
     int b1 = 34.3333;
     double b2 = 34.3333;
     cout << b1 << endl;                                              //34 
     cout << b2 << endl;                                              //34.333
     
     return 0;
}