#include <bits/stdc++.h>

int main(){
    int x;
    double y, med;

    std::cin >> x >> y;
    med = x/y;

    std::cout << std::fixed << std::setprecision(3) << med << " km/l" << std::endl;

    return 0;
}