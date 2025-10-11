 #include<stdio.h>
 
 /* Finding square of the rectangle by Denis Kuznetsov aka retterhalm*/
 
 int main(){
		float a, b, s; //initialising variables for rectangle sides and square
		
		scanf("%f%f", &a, &b); //user input for the sides
		
		s = a * b; //calculating the square usingthe formula S = a * bar
		
		printf("%f\n", s); // output the result  
	 return 0;
 }
