#include <iostream>
#include <iomanip>
int main(){
    double a,b,c,m;
    std::cin >> a >> b >> c;
    m = (a*2 + b*3 + c*5)/10;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "MEDIA = " << m << std::endl;
    return 0;
} 