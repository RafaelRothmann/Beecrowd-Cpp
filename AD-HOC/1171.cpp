#include <iostream>

int main()
{
    int n, x, numeros[2001] = {};

    std::cin >> x;

    for (int i = 0; i < x; i++)
    {
        std::cin >> n;
        numeros[n]++;
    }

    for (int i = 0; i < 2001; i++)
    {
        if (numeros[i] > 0)
        {
            std::cout << i << " aparece " << numeros[i] << " vez(es)\n";
        }
    }

    return 0;
}