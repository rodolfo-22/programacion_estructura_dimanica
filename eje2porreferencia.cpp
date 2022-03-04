#include <iostream>
using namespace std;
void intercambiar (int *, int *);
int main(void)
{
int a, b;
cout << endl;
cout << "INTERCAMBIAR LOS VALORES DE DOS VARIABLES" << endl << endl;
cout << "Digite el valor de a: ";
cin >> a;
cout << "Digite el valor de b: ";
cin >> b;
cout << "El valor de a es: " << a << endl;
cout << "El valor de b es: " << b << endl;

intercambiar( &a, &b);

cout << "El valor de a es: " << a << endl;
cout << "El valor de b es: " << b << endl;
cout << endl;
return 0;
}

void intercambiar (int *x, int *y)
{
int aux;
aux = *x;
 *x = *y; 
 *y = aux;
}