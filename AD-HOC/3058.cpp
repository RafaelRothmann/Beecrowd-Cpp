#include <iostream>

int main()
{
    int n;

    std::cin >> n;
    if (n >= 1 && n <= 100)
    {
        double valor, menor = 999999.99, peso;

        for (int i = 0; i < n; i++)
        {
            std::cin >> valor >> peso;

            if (valor > 0 && valor <= 1000.00 && peso >= 1 && peso <= 1000)
            {
                peso = 1000 / peso;
                valor *= peso;

                if (valor < menor)
                {
                    menor = valor;
                }
            }
        }

        printf("%.2f\n", menor);
    }

    return 0;
}