
#include <iostream>
using namespace std;

void soma(int *p){
    *p = *p + 1;
}


int main()
{
  int x;
  int *ptr;
  ptr = &x;
  cout << "O endereço de X é: " << ptr << endl;

  cout << "Antes O Valor de X é: " << x << endl;
  soma(ptr);
  cout << "Depois O Valor de X é: " << x << endl;
}