#include <bits/stdc++.h>
int main(){

    char next = 'a';
    
    std::string palavra;
    std::cin >> palavra;


    for (int i=0; i<palavra.size(); i++){
        if (palavra[i] <= next){
            palavra[i] = next;
            next ++;
        }
        if (next > 'z'){
            break;
        }
    }

    if (next > 'z'){
        std::cout << palavra << std::endl;
    } else{
        std::cout << "-1" << std::endl;
    }

    return 0;
}