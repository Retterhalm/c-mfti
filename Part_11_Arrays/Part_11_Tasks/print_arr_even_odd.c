/*
    This program printing separately even and odd numbers from given array
    by Denis Kuznetsov, aka retterhalm
    30.11.2025
*/

#include <stdio.h>
//#define N 1000   // Variant 1
//#include <stdlib.h> // for Variant 3

void fill_arr(int *arr, int n);
void print_odd(int *arr, int n);
void print_even(int *arr, int n);



int main()
{
    printf("This program will print separately even and odd numbers of a sequence you've entered\n");
    //int arr[N];  // Variant 1
    int n = 0; // Variant 2
    printf("Please enter the size of the sequence: ");
    scanf("%d", &n); //user input
    //int * arr = malloc(n * sizeof(int));
    int arr[n]; // initialize an array
    fill_arr(arr, n); //fill up the array
    print_even(arr, n); // print even
    print_odd(arr, n); // print odd
    //free(arr);  // Variant 3
    return 0;
  
}

void fill_arr(int * arr, int n)
{
    
    int i = 0;
    for(;i < n; i++){
        printf("Please enter the number and press Enter. %d left\n", (n - i));
        scanf("%d", &arr[i]);
        
    }
  
}

void print_even(int * arr, int n)
{
    printf("The even numbers are : ");
    int i = 0;  
    for(; i < n; i++){
        if(arr[i] % 2 == 0){
        printf("%d ", arr[i]);
        }
    }
    printf("\n");
}


void print_odd(int * arr, int n)
{
    printf("The odd numbers are: ");
    int i = 0;
    for(; i < n; i++){
        if(arr[i] % 2 != 0){
        printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
