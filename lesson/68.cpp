#include <iostream>
#define DEBUG
using namespace std;


/*
Условная компиляция
*/

int main() {
     //Если debug определен то
#ifdef DEBUG        
     cout << "Log start" << endl; 
#endif
     for (int i = 0; i < 3; i++)
          cout << i << endl;
     //Если debug закоментирован то
#ifndef DEBUG       
     cout << "Log stop" << endl;
#endif

cout << "\n\n";
//------------------------------------

     // Если debug определен то 
#ifdef DEBUG                       
     cout << "Log start" << endl; 
#else                              
     cout << "Log OFF" << endl;    
#endif

     for (int i = 0; i < 3; i++)
          cout << i << endl;

     //Если debug закоментирован то выведет
#ifndef DEBUG       
     cout << "Log stop" << endl;
#else
     cout << "Log OFF" << endl;
#endif

     return 0;
}