#include <iostream>

int main()
{
    int bracoDir = 1, bracoEsq = 1, numeroRepeticoes = 1;
    float w1 = 45, w2 = 45, sum = 0, wMedia = 0;
    int total = 0;

    do
    {
        std::cin >> bracoEsq >> bracoDir >> numeroRepeticoes;

        if (bracoEsq == 0 && bracoDir == 0 && numeroRepeticoes == 0)
        {
            break;
        }

        w1 = (bracoDir * (1 + ((numeroRepeticoes) / 30.0F)));

        w2 = (bracoEsq * (1 + ((numeroRepeticoes) / 30.0F)));

        wMedia = (w1 + w2) / 2.0F;
        sum += wMedia;
        total++;

            if (wMedia >= 1 && wMedia < 13) {
                std::cout << "Nao vai da nao" << "\n";
            } else if (wMedia >= 13 && wMedia < 14) {
                std::cout << "E 13" << "\n";
            } else if (wMedia >= 14 && wMedia < 40) {
                std::cout << "Bora, hora do show! BIIR!" << "\n";
            } else if (wMedia >= 40 && wMedia <= 60) {
                std::cout << "Ta saindo da jaula o monstro!" << "\n";
            } else if (wMedia > 60) {
                std::cout << "AQUI E BODYBUILDER!!" << "\n";
            }

    } while (bracoDir >= 1 && bracoEsq >= 1 && numeroRepeticoes >= 1);

    if(sum / total > 40){
        std::cout << "\n" << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << "\n";
    }

    return 0;
}