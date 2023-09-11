#include <iostream>
#include <cmath>

int main(){
    int n;

    while(std::cin >> n){
        if (n >= 2 && n <= pow(10,4)){
            int numeroMaximo = 61, direito[numeroMaximo] = {}, esquerdo[numeroMaximo] = {}, paresBota = 0, numeroCalcado;
            char pe;

            for (int i = 0; i < n; i++)
            {
                std::cin >> numeroCalcado >> pe;
                
                if(pe == 'D'){
                    direito[numeroCalcado] += 1;
                    if(esquerdo[numeroCalcado] > 0){
                        direito[numeroCalcado] -= 1;
                        esquerdo[numeroCalcado]-= 1;
                        paresBota++;
                        
                    }
                } else  {
                    esquerdo[numeroCalcado] += 1;
                    if(direito[numeroCalcado] > 0){
                        esquerdo[numeroCalcado] -= 1;
                        direito[numeroCalcado] -= 1;
                        paresBota++;
                        
                    }
                }
            }

            std::cout << paresBota << '\n';
        }
    }

    return 0;
}