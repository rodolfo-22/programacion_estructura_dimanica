#include <iostream>
using namespace std;

int fibo(int n){
    if(n<=1){
        cout << "n=" << n << " caso base\n";
        return 1;
    }else{
        int x = fibo(n-2);
        int y = fibo(n-1);
        cout << "n=" << n << " x=" << x
          << " y=" << y << endl;
        return x + y;
    }
}

int main() {
    cout << "\nFibonacci de 5\n";
    int f = fibo(5);
    cout << "Resultado: " << f << endl;
}
