/*
    This program simulates watch in 12-hours formatting(time from 00 : 00 to 12 : 59 )
    
    By Denis Kuznetsov, aka retterhalm
    26.10.2025
*/

#include <stdio.h>

typedef struct {
    int h; // hours
    int min; // minutes
}TicTac;

static int scale = 12;

// Function prototypes

// Recieve curent time and return the time shifted by given amunt of minutes (min)

TicTac after(TicTac a, int min);

// Changing the clocks( *me) forward on the amount of given hours (a.h) and minutes (a.min)

void forward(TicTac * me, TicTac a);

// Changing the clocks( *me) backwards on the amount of given hours (a.h) and minutes (a.min)

void backward(TicTac * me, TicTac a);

// compare the readings of two watches(a and b) and return 1 if match and 0 if not

int isEqualTime(TicTac a, TicTac b);

// print the readings of the current watch in format hh : mm \n

void printTic(TicTac a);

// convert minutes to time
TicTac min2time( int mm);
// convert time to minutes
int time2min(TicTac a);


int main()
{
    TicTac a,b,c;
    int mk;

    scanf("%d:%d", &(a.h), &(a.min));
    scanf("%d", &mk);
    scanf("%d:%d", &(b.h), &(b.min));

    printf("equal: %d\n",isEqualTime(a,b));
    c = after(a, mk);
    printf("after: ");
    printTic(c);

    c = a;
    printf("forward: ");
    forward(&a, b);
    printTic(a);

    printf("backward: ");
    backward(&c, b);
    printTic(c);

    return 0;
}

TicTac after(TicTac a, int min)
{
    min += time2min(a);

    return min2time(min);
}

void forward(TicTac * me, TicTac a)
{
    *me = min2time(time2min(*me) + time2min(a));
   
}
void backward(TicTac * me, TicTac a)
{
    int res = time2min(*me) - time2min(a);
    res = ((res % (scale * 60) + (scale * 60)) % (scale * 60));
    *me = min2time(res);
      
}

int isEqualTime(TicTac a, TicTac b)
{
    return a.h == b.h && a.min == b.min;
}

void printTic(TicTac a)
{
    printf("%02d : %02d\n", a.h, a.min);
}

int time2min(TicTac t)
{
    int res;

    res = t.h * 60 + t.min;
    return res;
}

TicTac min2time(int mm)
{
    TicTac res;
    
    res.min = mm % 60;
    res.h = mm / 60 % scale ;
    return res;
}