#include <iostream>
#include <iomanip>
int main(){
    double a, b, m;
    std::cin >> a >> b;
    m = (a * 3.5 + b* 7.5) / 11;
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "MEDIA = " << m << std::endl;
    return 0;
}