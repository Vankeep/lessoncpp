#include <iostream>
#include <cstring>
using namespace std;

/*
Строки в С++
Строковый массив в С++
*/

int main() {
     char string[] {"Hello"}; 
     printf("%s\n", string);                 //Hello

     char string2[] {'H','e','l','l','o'};
     cout << string2 << endl;                //Hello����� 

     char string3[] {'H','e','l','l','o','\0'};
     cout << string3 << endl;                //Hello

     char string4[] {'H','e','l','l','o','\0'};
     cout << strlen(string4)<< endl;         //5
     return 0;
}