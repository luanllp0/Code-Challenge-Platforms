#include <bits/stdc++.h>

int maior(int x, int y){
    return (x + y + abs(x-y))/2;
}

int main(){
    int a, b, c, maior1, maior2;

    std::cin >> a >> b >> c;

    maior1 = maior(a, b);
    maior2 = maior(maior1, c);

    std::cout << maior2 << " eh o maior" << std::endl;

    return 0;
}