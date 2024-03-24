#include <iostream>
using namespace std;


int main() {
     int a = 5;
     int* pa = &a;
     int& aRef = a;

     cout << "a = \t\t" << a << endl;                  //a = 	5
     cout << "&a = \t" << &a << endl;                  //&a = 	0x42a87ffadc
     cout << "pa = \t" << pa << endl;                  //pa = 	0x42a87ffadc
     cout << "*pa = \t" << *pa << endl;                //*pa = 	5
     cout << "&pa = \t" << &pa << endl;                //&pa = 	0x42a87ffad0
     cout << "aRef = \t" << aRef << endl;              //aRef = 	5
     cout << "&aRef = \t" << &aRef << endl << endl;    //&aRef = 0x42a87ffadc

     int *b = new int(7);
     int *pb = b;
     int &bRef = *b;
     cout << "b = \t\t" << b << endl;                  //b = 		0x1b06df99040
     cout << "&b = \t" << &b << endl;                  //&b = 	0x42a87ffac8
     cout << "*b = \t" << *b << endl;                  //*b = 	7
     cout << "pb = \t" << pb << endl;                  //pb = 	0x1b06df99040
     cout << "&pb = \t" << &pb << endl;                //&pb = 	0x42a87ffac0
     cout << "*pb = \t" << *pb << endl;                //*pb = 	7
     cout << "bRef = \t" << bRef << endl;              //bRef = 	7
     cout << "&bRef = \t" << &bRef << endl;            //&bRef = 	0x1b06df99040
     return 0;
}