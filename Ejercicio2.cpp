#include <iostream>
using namespace std;

int main (){
    int n, s, prom, A[25];

    cin >> n;

    s = 0;

    for (int i=1; i<n; i++){
        cin >> A[i];
        s=s+A[i];
    }
    prom = s/n;

    for (int i=1; i<n; i++){
        if(A[i] > prom){
            cout << A[i];
        }
    }
    return 0;
}