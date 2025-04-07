#include <bits/stdc++.h>

int main(){
    int cod1, cod2, num1, num2;
    double valor1, valor2, total;

    std::cin >> cod1 >> num1 >> valor1;
    std::cin >> cod2 >> num2 >> valor2;

    total = (num1 * valor1) + (num2 * valor2);

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}