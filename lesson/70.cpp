#include <iostream>
using namespace std;

/*
Параметры функции main
*/


/*
Если в консоли запустить этот фал допсутим вот так:
     > PS C:\Users\Asus\Desktop\Cpp\lesson> .\70 -t -o lol kek
Вывод в конслоь будет такой:
hello
C:\Users\Asus\Desktop\Cpp\lesson\70.exe
-t
-o
lol
kek

 > PS C:\Users\Asus\Desktop\Cpp\lesson> .\70
Вывод в конслоь будет такой:
hello
C:\Users\Asus\Desktop\Cpp\lesson\70.exe
*/


int main(int argc, char const* argv[]) {
     cout << "hello" << endl;
     for (int i = 0; i < argc; i++){
          cout << argv[i] << endl;
     }
     return 0;
}
