YU//a c program that calculates triangle area and outputs it implementing a symbolic name 
#include<stdio.h>//preprocessor directive statement 
#define half 0.5//pre-processor directive statement that recognizes a symbolic constant
main()
{//beggining of program excecution
    float base,height,trianglearea;//declared variales 
    printf("please enter base value\n");//prompts user to enter base value
    scanf("%f",&base);//gets base value
    printf("please enter height value\n");//prompts user to enter height value
    scanf("%f",&height);//gets height value
    trianglearea=half*base*height;//calculates triangle area
    printf("the trianglearea is:%.3f" ,trianglearea);//outputs calculated triangle area
}//end of program excecutionhk
