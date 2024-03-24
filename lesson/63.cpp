#include <iostream>
#define NEW_SRT cout << endl
using namespace std;

/*
Строки и указатели
*/

int srtLen(const char* str) {
    int count = 0;
    while (*(str + count) != '\0') {
        count++;
    }
    return count;
}

int main() {
     char str[] = "Hello";
     char* foo = str;
     cout << foo;          //Hello

     NEW_SRT;
     const char* srtArr2[] = { "Hello", "world", "!" };
     for (int i = 0; i < 3; i++) {
          cout << srtArr2[i] << " ";
     }

     NEW_SRT;
     std::string srtArr3[] = { "Hello", "world", "!" };
     for (const string& str : srtArr3) {
          cout << str << " ";
     }

     NEW_SRT;
     char srtArr4[][6] = { "Hello", "world", "!" };
     for (const string& str : srtArr4) {
          cout << str << " ";
     }

     NEW_SRT;
     cout << srtLen(str) << endl;
     
     return 0;
}