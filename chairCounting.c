#include<stdio.h>

/*a programm for counting chair placement along the side of the rectangle room. User provides square of the room, the length of one side
and the width of the chair. Need to calculate other side's length and calculate how many chairs will fit along it.
By Denis Kuznetsov aka retterhalm 2025*/


int main(){
	
		float s, side1_len, side2_len, chair_wid; // initiate variables
		int chairs;
		
		scanf("%f%f%f", &s, &side1_len, &chair_wid); // user input for the square, known side length and a chair width
		
		side2_len = s / side1_len; // calculating theother side length
		
		chairs = (int)(side2_len /chair_wid); // calculating how many chairs will fit
		
		printf("%d\n", chairs); //outputing the result
		
	return 0;
}