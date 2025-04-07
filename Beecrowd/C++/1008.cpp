#include <bits/stdc++.h>

int main(){

    int n, horas;
    double salario, final;

    std::cin >> n >> horas >> salario;
    final = salario*horas;

    std::cout << "NUMBER = " << n << std::endl;
    std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << final << std::endl;  

    return 0;
}