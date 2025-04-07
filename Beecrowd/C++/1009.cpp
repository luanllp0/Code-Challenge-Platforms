#include <bits/stdc++.h>

int main(){
    std::string nome;
    double salario, vendas, total;

    std::cin >> nome;
    std::cin >> salario;
    std::cin >> vendas;

    total = salario + ((vendas/100)*15);

    std::cout << "TOTAL = R$ "<< std::fixed << std::setprecision(2) << total <<std::endl;
    return 0;
}