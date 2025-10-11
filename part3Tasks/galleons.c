#include <stdio.h>

/*
    galleons task by Denis Kuznetsov aka retterhalm
    11.10.2025

    Description:
        "У магов свои деньги. В магической Великобритании это кнаты (knut), сикли (sickle) и галеоны (galleon)

    1 галеон = 17 сиклей

    1 сикль = 29 кнатов

    В одном кошельке g1 галеонов, s1 сиклей и k1 кнатов.
    В другом кошельке g2 галеонов, s2 сиклей и k2 кнатов.
    Сколько всего денег в кошельках? Представьте эту сумму, используя минимальное количество монет.

Входные данные

Через пробел g1 s1 k1 на одной строке. Через пробел g2 s2 k2 на следующей строке.
Выходные данные

Через пробел вычисленное количество галеонов, сиклей и кнатов."

*/

int main(){

        int g1, s1 , k1, g2, s2, k2, total, totalG, totalS, totalK; 

        scanf("%d%d%d", &g1,&s1,&k1); //user input for the first mage's wallet
        scanf("%d%d%d", &g2, &s2, &k2); // user input for the second mage's  wallet

        total = (((g1 + g2) * 17) +(s1 + s2)) * 29 + k1 + k2 ; //calculate the total amount of money
        totalG = total / 493; // 17 * 29 = 493 knuts in one galleon
        totalS = (total % 493) / 29; // 29 kunts in one sicle
        totalK = (total % 493) % 29; // the rest is knuts

        printf("%d %d %d\n", totalG, totalS, totalK); //output the result

    return 0;
}
