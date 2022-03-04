#include <iostream>
using namespace std;

int factorial(int num){
  int respuesta = 0;
  if(num==0){
    cout << "n=" << num << " caso base" << endl;
    respuesta = 1;
  }else{
    int x = num - 1;
    respuesta = num * factorial(x);
    cout << "n=" << num << " x=" << x << endl;
  }
  return respuesta;
}

int main() {
    cout << "Factorial de 6\n";
    int r = factorial(6);
    cout << "Resultado: " << r << endl;
    return 0;
}