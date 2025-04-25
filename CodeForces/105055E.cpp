#include <bits/stdc++.h>

std::string inverterString(const std::string& str) {
    std::string invertida = str;
    std::reverse(invertida.begin(), invertida.end());
    return invertida;
}

int main() {
    int n;
    std::cin >> n;

    std::string estring;
    std::cin >> estring;

    std::string s;

    for (int i = n - 1; i >= 0;) {
        if (i >= 2 && estring[i] == 'a' && estring[i - 1] == 'b' && estring[i - 2] == 'a') {
            s += '1';
            i -= 3;
        } else if (i >= 1 && estring[i] == 'b' && estring[i - 1] == 'a') {
            s += '0';
            i -= 2;
        } else {
            std::cout << ":(" << std::endl;
            return 0;
        }
    }

    std::string stringfinal = inverterString(s);

    std::cout << stringfinal << std::endl;

    return 0;
}