//c program that calculates circle area and outputs it and is implemented using a symbolic constant.
#include<stdio.h>//pre-processor directive statement
#define pie 3.14//pre-processor directive statement that recognizes a symbolic constant
main() 
{//beggining of program excecution
     float radius,circlearea;//variable declaration(put comma inbtn declared variables if more than one)
     printf("please enter radius value\n");//prompts the user to enter radius value(\n>
     scanf("%f",&radius);//getting the user entered radius value
	 circlearea=pie*radius*radius;//calculating circle area using symolic constant
	 printf("the circle area is:%.3f" ,circlearea);//displays calculated circlearea 
}
