/*
    This program calculate if it enough money for student to buy a lucnch. 
    by Denis Kuznetsov aka retterhalm
    09.11.2025
*/

#include <stdio.h>
#include <math.h>
void is_enough_money(float *money, float *checkout);
float set_price(char *menu_item);
void set_wallet(float *money);
void user_order(char *menu_item, float price, float *checkout);


int main()
{   
    printf("Hello! this is Hungry Student Calculator.\n");
    printf("It will help you to calculate the total cost of your lunch.\n\n");

    // variables
    float money = 0;
    float checkout = 0;
    float rice_price = 0;
    float veg_price = 0;
    char menu_1[] = "rice";
    char menu_2[] = "salad";
    // wallet preset
    set_wallet(&money);
    
    // price preset
    if(money){
        printf("Now let's enter the prices.\n\n");
        rice_price = set_price(menu_1);
        veg_price = set_price(menu_2);

    

        //Select options
        printf("Now, it's the time to choose your dishes\n\n");
        printf("Today's options are:  %s and %s.\n\n", menu_1, menu_2);

        //user input
        
        user_order(menu_1, rice_price, &checkout);
        user_order(menu_2, veg_price, &checkout);

        // calculate the if user can afford

        is_enough_money(&money, &checkout);
    }
       printf("See you next time, Pal!\n");
    return 0;
}

void set_wallet(float *money)
{
    printf("First things first. How much money do you have?\n\n");
    scanf("%f", money);
    printf("\n");
    if(*money > 0 && *money <= 5){
        printf("Tough times, huh? let's see what you can get.\n\n");
    }
    else if(*money > 5 && *money <= 20){
        printf("At least it's enough for a quick bite\n\n");
    }
    else if(*money > 20 && *money <= 100){
        printf("Looks like the day is gonna be good!\n\n");
    }
    else{
        printf("Another empty day. Hope tomorrow will better!\n");
    }
    
}
float set_price(char * menu_item)
{  
    float price;
    printf("What is the price of %s today?\n", menu_item);
    scanf("%f", &price);
    printf("\n");
    return price;
}

void user_order(char * menu_item, float price, float * checkout)
{
    float qty = 0;
    printf("How many portions of %s would you like?\n", menu_item);
    scanf("%f", &qty);
    printf("\n");
    *checkout += qty * price;
    printf("Your total is: %.2f $\n\n", *checkout);
}

void is_enough_money(float *money, float*checkout){
    float change = 0;
    if(*money > *checkout){
        change = *money - *checkout;
        printf("Cool! You still have %.2f $ left\n\n", change);
       
        
    }
    else if(fabs(*money - *checkout) < 0.01){
        printf("Bull's eye! You have exactly amount of money!\n\n");
        
    }
    else{
    printf("Sorry, Bud, you can't afford it\n\n");
    printf("You're short of %.2f$\n\n", (*checkout - *money) + 0.000001);
    }
     *money = change;
}