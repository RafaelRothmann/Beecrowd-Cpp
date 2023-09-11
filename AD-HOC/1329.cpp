#include <iostream>

int main()
{
    int n;

    while (std::cin >> n)
    {
        if (n > 0)
        {
            int jogo[n] = {};
            int joao = 0;
            int maria = 0;

            for (int i = 0; i < n; i++)
            {
                std::cin >> jogo[i];

                if (jogo[i] == 0)
                {
                    maria++;
                }
                else if (jogo[i] == 1)
                {
                    joao++;
                }
            }
            std::cout << "Mary won " << maria << " times and John won " << joao << " times" << "\n";
        }
    }
    return 0;
}