#include <iostream>
using namespace std;
int main(){
    
    int n, A[20], max;

    cout << "Ingrese la cantidad valores que se va ingresar" << endl;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    
    max = A[0];

    for (int i=2; i<n; i++){
        if (A[i] > max){
            max = A[i];
        }
    }
    cout << "El numero mayor es: " << max << endl;
    cout << max;

    return 0;
}
