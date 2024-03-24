#include <iostream>
#include <cstring>
#include <string>
using namespace std;

/*
Конкатенация строк
*/

int main() {
     //Стиль C
     char result[255]{};
     char str1[255]{"Hello"};
     char str2[255]{"World"};

     strcat(result, str1);
     strcat(result, str2);

     cout << result << endl;            //HelloWorld

     //Стиль С++
     string str3 = "Hello";
     string str4 = "World";
     string res1 = str3 + str4;
     cout << res1 << endl;              //HelloWorld

     string res2 = str3 + " " + str4;
     cout << res2 << endl;              //Hello World

     return 0;
}