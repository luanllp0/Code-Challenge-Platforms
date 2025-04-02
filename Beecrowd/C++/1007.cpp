#include <iostream>
int diferenca(int a, int b, int c, int d){
    return ((a*b)-(c*d));
}


int main(){

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << "DIFERENCA = " << diferenca(a, b, c, d) << std::endl;


    return 0;
}