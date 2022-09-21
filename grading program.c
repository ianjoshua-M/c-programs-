//a simple c grading  program 
#include<stdio.h>;//this is a preprocessor directive statement 
main()
{//start of program excecution
     float studentmark;//variable declaration
     printf("please enter student mark.\n");//prompts user to enter student mark 
     scanf("%f" ,&studentmark);//getting student mark
     if(studentmark>=0 &&studentmark<40)
     
     {
     	printf("refer");//statement to be displayed 
	 }
	 else if(studentmark>=40 &&studentmark<=59.99)
	 {
	 	printf("pass");//statement to be displayed 
	 }
     else if(studentmark>=60 &&studentmark<=75.99)
     {
     	printf("credit");//statement to be displayed 
	 }
	 else if(studentmark>=76 &&studentmark<=100)
	 {
	 	printf("distinction");//statement to be displayed
	 }
	 else
	
	{
	 	printf("invalid mark");//statement to be displayed 
	 }
}//end of program excecution

