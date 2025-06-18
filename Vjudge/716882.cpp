#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>vet(n);
    
    for (int i=0; i<n; i++){
        cin >> vet[i];
    }
    
    sort(vet.begin(), vet.end());
    int maior = 0;
    int valor = 0;

    for (int i=n-1; i>= 0 ; i--){
        if (vet[i] * (n-i) >= maior){
            valor = vet[i] * (n-i);
            maior = vet[i];
        }
    }
    cout << maior << " " << valor << endl;    
}