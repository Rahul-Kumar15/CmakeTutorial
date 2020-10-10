#include<iostream>
#include"header.cpp" // #include is a preprocessor directive,it includes header.cpp as a header file)
using namespace std; 

int main()  // main() function is the entry point of program
	    // all cpp programs have a main function
{ int num1, num2, opt; // declaration of variables
  double result=0;
  cout<<" What do you want to do : \n 1.Find factorial \n 2.Find average\n";
  cin>>opt;
  switch(opt) // switch case
	  
	  /*  
	  Switch case statements are a substitute for long if statements 
	  that compare a variable to several integral values.
          The switch statement is a multiway branch statement. It provides 
	  an easy way to dispatch execution to different parts of code 
	  based on the value of the expression.
          Switch is a control statement that allows a value to change 
	  control of execution.
	  */
	  
  { case 1 : cout<<" Enter number whose factorial is to be found : ";
	     cin>>num1;  // input a number num of int type
	     result=factorial(num1); 
	     cout<<" The factorial of "<<num1<<" is "<<result<<"\n"; // print the factorial of given number
	     break;

    case 2 : cout<<" Enter two numbers whose average is to be found : "; 
	     cin>>num1>>num2; // input two numbers num1 & num2 of int type 
	     result=average(num1,num2); 
	     cout<<" The average of "<<num1<<" & "<<num2<<" is "<<result<<"\n";  // print the average of two numbers
	     break; 
   
    default : cout<<" Invalid input !!!\n";
  }
  return 0;
} 
