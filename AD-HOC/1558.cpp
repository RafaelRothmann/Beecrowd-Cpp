#include <iostream>
#include <cmath>

int main(){

    int n;

    while(std::cin >> n){
        bool somaDeQuadrados = false;
        int i = 0, s, j = sqrt(n); 

        while (j >= i){
            s = (i*i) + (j*j);

            if (s == n){
                somaDeQuadrados = true;
                break;
            } else if (s < n){
                i++;
            } else {
                j--;
            }
        }

        if(somaDeQuadrados){
            std::cout << "YES" << "\n";
        } else {
            std::cout << "NO" << "\n";
        }

    }

    return 0;
}