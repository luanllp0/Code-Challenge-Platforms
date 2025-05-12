#include <bits/stdc++.h>
#define endl '\n'

int main(){
    int n, m;
    std::cin >> n;
    std::cin >> m;
    int vet[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> vet[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (j == m-1 && i == n-1){
                if (vet[i][j] == vet[i-1][j] || vet[i][j] == vet[i][j-1]){
                    vet[i][j]++;
                } 
            }
            else if (j == 0 && i == 0){
                if (vet[i][j] == vet[i+1][j] || vet[i][j] == vet[i][j+1]){
                    vet[i][j]++;
                } 
            }
            else if (j == m-1 && i == 0){
                if (vet[i][j] == vet[i+1][j] || vet[i][j] == vet[i][j-1]){
                    vet[i][j]++;
                } 
            }
            else if (j == 0 && i == n-1){
                if (vet[i][j] == vet[i-1][j] || vet[i][j] == vet[i][j+1]){
                    vet[i][j]++;
                } 
            }
            else if (j == 0){
                if (vet[i][j] == vet[i-1][j] || vet[i][j] == vet[i+1][j] || vet[i][j] == vet[i][j+1]){
                    vet[i][j]++;
                } 
            }
            else if (j == m-1){
                if (vet[i][j] == vet[i-1][j] || vet[i][j] == vet[i+1][j] || vet[i][j] == vet[i][j-1]){
                    vet[i][j]++;
                } 
            }
            else if (i == 0){
                if (vet[i][j] == vet[i][j-1] || vet[i][j] == vet[i][j+1] || vet[i][j] == vet[i+1][j]){
                    vet[i][j]++;
                } 
            }
            else if (i == n-1){
                if (vet[i][j] == vet[i][j-1] || vet[i][j] == vet[i][j+1] || vet[i][j] == vet[i-1][j]){
                    vet[i][j]++;
                } 
            }
            else{
                if (vet[i][j] == vet[i][j-1] || vet[i][j] == vet[i][j+1] || vet[i][j] == vet[i+1][j] || vet[i][j] == vet[i-1][j]){
                    vet[i][j]++;
                } 
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cout << vet[i][j] << " ";
        }
        std::cout << endl;
    }

    return 0;
}