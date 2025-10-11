#include<stdio.h>
/*
    Minutes to Hours and minutes by Denis Kuznetsov aka Retterhalm
    11.10.2025

*/

void mm2hm(int mm, int *hours, int *minutes){     // mm - minutes have passed since the beginning of the day

    *hours = mm / 60;
    *minutes = mm % 60;

}

int main(){

        int h, m, mm;

        printf("Please enter amounts of minutes have passed from the beginning of the day.\n");
        scanf("%d", &mm);
        mm2hm(mm, &h, &m);

        printf("From the begining of the day have passed %d hours and %d minutes.\n", h, m);
    return 0;
}
