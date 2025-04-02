#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){
    int n, a = 0, b = 0, temp;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp >= 0){  
            a += temp;
            continue;
        }
        b += (temp); 
    }

    cout << a-b << endl;

    return 0;
}