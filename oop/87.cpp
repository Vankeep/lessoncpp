#include <iostream>
using namespace std;

/*
Перегрузка оператора индексирования []
*/
class Vector{
     int arr[5];
public:
     Vector(int* val){
          for (int i = 0; i < 5; i++){
               this->arr[i] = val[i];
          };
     }
     int& operator[](int index){
          return arr[index];
     }
};
int main() {
     Vector v(new int[5]{1,2,3,4,5});
     cout<<v[0]<<endl;
     return 0;
}