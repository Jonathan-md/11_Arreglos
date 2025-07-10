
#include<iostream>
using namespace std;

int main(){

    int n, A[10], aux;
    cout << "Cuantos numeros quieres ingresar? (maximo 10): ";
    cin >> n;
    if (n > 10 || n <= 0) {
        cout << "Numero invalido. Debe ser entre 1 y 10." << endl;
        return 1; 
    }
    cout << "Ingresa los " << n << " numeros:" << endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    for(int i=0; i<n/2; i++){
        aux = A[i];
        A[i] = A[n-(i+1)];
        A[n-(i+1)] = aux;
    }
    cout << "Arreglo invertido: ";
    for(int i=0; i<n; i++){
        cout << A[i];
    }
    return 0;
}