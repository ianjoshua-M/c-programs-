#include<stdio.h>;//this is a preprocessor directive statement 
main()
{//start of program execution
     float studentposition;//variable declaration
     printf("please enter studentposition.\n");//prompt user to enter student position
     scanf("%f" ,&studentposition);//entering student position
     if(studentposition==1)
     {
     	printf("pencil,journal and a pen");
	 }
	 else if(studentposition==2)
	 {
	 	printf("pencil and journal");
	 }
	 else if(studentposition==3)
	 {
	 	printf("journal");
	 }
	 else
	 {
	 	printf("awarding criteria not met");
	 }
  
}
