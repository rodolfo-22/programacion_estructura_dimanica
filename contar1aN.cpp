#include <iostream>
using namespace std;

void contarRec( int, int);
void contarIter(int);

int main(void){
    int n;

    cout<<endl;
    cout<<"CONTAR DEL 1 A N"<<endl<<endl;
    cout<<"¿hasta que numero contar?";
    cin>>n;
     //version iterativa
     contarIter(n);

     //version recursiva
     contarRec(1,n);
     cout<<endl;
    

    return 0;
}

void contarRec( int i, int n){

    if(i<=n){
        cout<< i<< endl;
        i++;
        contarRec(i,n);
    }
}

void contarIter(int n){

    int i;
    i=1;
     
     while(i<=n){
         cout << i<<endl;
         i =i + 1;
     }
}