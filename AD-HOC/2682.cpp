#include <iostream>

int main(){

    int numant = 1 , numero = 0;
    bool falha = false;

    while(std::cin >> numero){
        if(numero < numant){
            falha = true;
            break;
        }
        numant = numero;
    }

    if(falha){
        std::cout << numant + 1 << "\n";
    } else {
        std::cout << numero + 1 << "\n";
    }

    return 0;
}