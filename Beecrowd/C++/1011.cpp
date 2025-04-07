#include <bits/stdc++.h>

int main(){

    double raio, volume, cuboRaio, pi = 3.14159;
    std::cin >> raio;
    cuboRaio = raio*raio*raio;
    volume = (4.0/3)*pi*cuboRaio;
    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << volume << std::endl;

    return 0;
}