/*
    This program will define the type of the triangle by provided lenth of its sides
    by Kuznetsov Denise aka retterhalm
    09/11/2025

*/
#include <stdio.h>

int is_valid_triangle(int a, int b, int c);
void triangle_len_type(int a, int b, int c, int *res);
void sort2(int * a, int * b);
void sort3(int * x, int * y, int * z);

int main()
{
    //variables for the sides
    int a = 0;
    int b = 0;
    int c = 0;
    
    int res = -1; // Output codes: "2" : Equilateral, "1" : Isosceles, "0" - ordinary valid, "-1" not a triangle

    //user input
    scanf("%d %d %d", &a, &b, &c);
    triangle_len_type(a, b, c, &res);
    printf("%d\n", res);
        
    
    return 0;
}

int is_valid_triangle(int a, int b, int c)
{
    if((a + b) > c && (b + c) > a && (c + a) > b){
        return 1;
    }
    else{
        return 0;
    }
}
void triangle_len_type(int a, int b, int c, int *res){
    if(is_valid_triangle(a, b, c)){
        sort3(&a, &b , &c);
            if(a == b && b == c){
                *res = 2;

            }else if(a == b || b == c){
                    *res = 1;
                }
            
            else{
                *res = 0;
            }
        }
    }

void sort2(int * a, int * b)
{
  if(*a <= *b){
    return;
  }
  int temp = *b;
  *b = *a;
  *a = temp;
}

void sort3(int * x, int * y, int * z)
{
  sort2(x, z);
  sort2(x, y);
  sort2(y, z);
}