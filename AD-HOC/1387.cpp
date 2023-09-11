#include <iostream>

int main()
{
    int l,r;

    while (std::cin >> l >> r && l != 0 && r != 0)
    {
        std::cout << l + r << "\n";
    }
    
    return 0;
}