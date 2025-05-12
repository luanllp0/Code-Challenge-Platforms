#include <bits/stdc++.h>
#define endl '\n'

int main(){
    int n;
    int vet[3];
    std::cin >> n;

    for (int i = 0; i< n; i++){
        for (int j=0; j<3; j++){
            std::cin >> vet[j];
        }
        if (vet[0] == vet[1]){
            std::cout << vet[2] << endl;
        }
        else if (vet[1] == vet[2]){
            std::cout <<  vet[0] << endl;
        }
        else if (vet[0] == vet[2]){
            std::cout <<  vet[1] << endl;
        }
    }

    return 0;
}