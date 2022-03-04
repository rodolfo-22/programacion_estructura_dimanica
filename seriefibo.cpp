#include <iostream>
using namespace std;

void seriefiboIter (int);
void seriefiboRec (int);
void seriefiboR (int, int, int, int);

int main (void){
    int n;

    cout<< endl;
    cout<<" MOSTRAR N TERMINOS DE FIBONACCI"<<endl<<endl;

    cout<<" cuantos terminos desea generar?"<<endl;
    cin>>n;
    seriefiboIter(n);
    cout<<endl;
    seriefiboRec (n);

    return 0;
}

void seriefiboIter (int n){

    switch(n){
        case 1:
            cout << 0 <<endl;
            break;
        case 2:
             cout << 0 <<" "<< 1 <<endl; 
             break;
        default:
            int i, a = 0, b = 1, c;
            i=3;
            cout << 0  <<" " << 1 << " " ;
            while(i<=n){
                c = a + b;
                cout<< c<<" ";
                a=b;
                b=c;
                i++;
            }
    }
}

void seriefiboRec (int n){

    switch(n){
        case 1:
            cout << 0 <<endl;
            break;
        case 2:
             cout << 0 <<" "<< 1 <<endl; 
             break;
        default:
            int i, a = 0, b = 1, c;
            i=3;
            cout << 0  <<" " << 1 << " " ;
            seriefiboR(3, n, 0, 1);
    }
}


void seriefiboR (int i, int n, int a, int b){ 
    int c;
    if ( i <= n ){
        c = a+b;
        cout << c << " ";
        seriefiboR( i+1, n, b, c);
            //a = b;
            //b = c; 
    }
}