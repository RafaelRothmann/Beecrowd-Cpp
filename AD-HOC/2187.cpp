#include <iostream>

int main()
{
    int bit,j = 1;


    while(std::cin >> bit && bit > 0){
        int moedas[4] = {};

        while (bit > 0)
        {
            if(bit >= 50){
                bit -= 50;
                moedas[3]++;
            } 
            else if (bit >= 10)
            {
                bit -= 10;
                moedas[2]++;
            } 
            else if (bit >= 5)
            {
                bit -= 5;
                moedas[1]++;
            } 
            else if (bit >= 1)
            {
                bit -= 1;
                moedas[0]++;
            }
            
        }
        
        std::cout << "Teste " << j << "\n";
        std::cout << moedas[3] << " " << moedas[2] << " "  << moedas[1] << " " << moedas[0] << "\n\n";
        j++;
        
    }

    return 0;
}