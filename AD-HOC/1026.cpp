#include <iostream>

int main(){
    long n,m,soma;

    while(std::cin >> n >> m){

        soma = n ^ m;
        
        std::cout << soma << "\n";
    }   

    return 0;
}