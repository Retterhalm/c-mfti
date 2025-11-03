/*

    This program calculate new coordinates of given segment rotated by 90 degrees clockwise.
    by Denis Kuznetsov, aka retterhalm
    26.10.2025
*/   
#include <stdio.h>
#include<math.h>


typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a;    // начало отрезка
    Point b;    // конец отрезка
    float len;  // длина отрезка
} Line;

float distance(Point a, Point b);   // расстояние между точками
void scanLine(Line * t);
void printLine(Line t);
void rotRLine(Line * t);

int main() {
    Line t;

    scanLine(&t);
    // тут должен быть вызов функции rotRLine
    rotRLine(&t);
    printLine(t);

    return 0;
}

float distance(Point a, Point b)
{

    // AB = √(xb - xa)2 + (yb - ya)
   return sqrtf(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y))); 

}

void scanLine(Line * t)
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
    t->a.x = x1;
    t->a.y = y1;
    t->b.x = x2;
    t->b.y = y2;
    
}

void rotRLine(Line * t)
{
    // switch the  coordinates and make the last negative
    int tmp;
    tmp = t->a.x;
    t->a.x = t->a.y;
    t->a.y = -tmp;

    tmp = t->b.x;
    t->b.x = t->b.y;
    t->b.y = -tmp;
}
void printLine(Line t)
{
    printf("%.3f\n", distance(t.a, t.b));
}