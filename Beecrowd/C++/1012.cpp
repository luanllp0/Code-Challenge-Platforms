#include <bits/stdc++.h>

int main(){
    double a,b,c;
    double tri, circ, trap, quad, ret;
    std::cin >> a >> b >> c;

    tri = a*c/2;
    circ = 3.14159 * c * c;
    trap = (a+b)*c /2;
    quad = b*b;
    ret = a*b;

    std::cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << tri << std::endl;
    std::cout << "CIRCULO: " << std::fixed << std::setprecision(3) << circ << std::endl;
    std::cout << "TRAPEZIO: " << std::fixed << std::setprecision(3) << trap << std::endl;
    std::cout << "QUADRADO: " << std::fixed << std::setprecision(3) << quad << std::endl;
    std::cout << "RETANGULO: " << std::fixed << std::setprecision(3) << ret << std::endl;


    return 0;
}