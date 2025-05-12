#include <bits/stdc++.h>
#define endl '\n'

int main(){
    int t, x, k;
    std::cin >> t;
    for (int i =0; i<t; i++){
        std::cin>>x;
        std::cin>>k;
        if (x%k != 0){
            std::cout<<1<<endl;
            std::cout<<x<<endl;
        }
        else{
            std::cout<<2<<endl;
            std::cout<<x+1<<endl;
            std::cout<<-1<<endl;           
        }
    }

    return 0;
}