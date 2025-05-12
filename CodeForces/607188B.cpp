#include <bits/stdc++.h>
#define endl '\n'

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int y, cont = 0, maxSeq = 1, currentSeq = 1;
        std::cin >> y;
        std::string x;
        std::cin >> x;

        for (int i = 1; i < y; i++) {
            if (x[i] == x[i - 1]) {
                currentSeq++;
                maxSeq = std::max(maxSeq, currentSeq);
            } else {
                currentSeq = 1;
            }
        }

        cont = maxSeq + 1;
        std::cout << cont << endl;
    }

    return 0;
}