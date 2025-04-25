#include <bits/stdc++.h>
int main(){

    int n, m, var;
    std::cin>>n;
    std::cin>>m;

    var = n/m;
    if (var % 2 == 0){
        std::cout << ("MARCEL") << std::endl;
    }else{
        std::cout << ("JOAOZAO") << std::endl;
    }

    return 0;
}