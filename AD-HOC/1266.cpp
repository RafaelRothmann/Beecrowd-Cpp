#include <iostream>

int main(){

    int n;

    while(std::cin >> n){
        if(n>=5 && n <= 5000){
            int zero = 0, soma = 0, inicio = 0, postes = 0,numero;

            for (int i = 0; i < n; i++)
            {
                std::cin >> numero;

                if(numero == 0 && inicio == 0){
                    zero++;
                    postes++;
                } else if (numero == 0 && inicio == 1){
                    postes++;
                } 
                if (numero == 1){
                    inicio = 1;
                    soma += postes / 2;
                    postes = 0;
                }
            }
            if (postes > 0)
            {
                soma -= zero / 2;
                postes += zero;
                soma += postes / 2;
            }
            std::cout << soma << "\n";
        }
    }


    return 0;
}