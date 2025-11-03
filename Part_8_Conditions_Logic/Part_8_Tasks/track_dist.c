/*
    This program calculates the distance to run depending of the age of the participant
    by Denis Kuznetsov aka retterhalm
    03.11.2025

*/



#include <stdio.h>

//int print_track(int age);
// define struct for group
typedef struct{
    int age_min;
    int age_max;
    int track;
} Group;

int def_track(Group, int age);

int main()
{
    // define age groups

    Group g0 = {1, 9, 0};
    Group g1 = {10, 12, 3};
    Group g2 = {13, 15, 5};
    Group g3 = {16, 120, 10};

    //variables
    int age = 0;
    int track = -1; //will use in condition to compare 
    
    //user input
    printf("Please, enter your age : \n");
    scanf("%d", &age);
    
    // condition to call a function
    if((track = def_track(g0, age)) != -1 ||
        (track = def_track(g1, age)) != -1 ||
        (track = def_track(g2, age)) != -1 ||
        (track = def_track(g3, age)) != -1) {
            printf("Your age is : %d years \n", age);
            printf("Your distance is : %d km\n", track);
    }
         
    return 0;
}

/*int print_track(int age)
{       int track = 0;
 
        if(age > 9){
            switch(age){
            case 10:
            case 11:
            case 12:
                track = 3;
                break;
            case 13:
            case 14:
            case 15:
                track = 5;
                break;
            default:
                track = 10;
                break;
        }
        }
        printf("%d", track);
    return track;
}
*/

int def_track(Group g, int age)
{
    if(age >= g.age_min && age <= g.age_max){
        return g.track;
    }
    
    else{
        
        return -1;
    }
        
}



