//a c program that calculates circle area using symbolic name 
#include<stdio.h>//pre-processor directive statement 
#define pie 3.14//pre-processor directive statemnt that recognizes symbolic constant 
main()
{//start of program excecution
   float radius,circlearea;//variable declaration
   printf("kindly enter radius value\n");//prompts the user to enter radius value
   scanf("%f",&radius);//get radius value
   printf("kindly enter radius value\n");//propmpts the user to enter radius value
   scanf("%f",&radius);//gets radius value
   circlearea=pie*radius*radius;//formula for circle area calculation
   printf("your calculated circle area is:%.3f" ,circlearea);//displays calculated circle area
}//end of program excecution
