/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

/*
#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
}
*/

#include<iostream>
int main()
{
  double salary, NetSalary;
  int eType, otHrs, OtRate;

  std::cout<<"Enter Employee Type : ";
  std::cin>>eType;

  std::cout<<"Enter Salary : ";
  std::cin>>salary;

  std::cout<<"Enter OThrs : ";
  std::cin>>otHrs;

  switch(eType)
  {
    case 1:OtRate = 1000;
    break;

    case 2:OtRate = 1500;
    break;

    case 3:OtRate = 1700;
    break;

    default:
      std::cout<<"Invalid Employee Type"<<std::endl;

  }
  NetSalary = salary + otHrs * OtRate;
  std::cout<<"net salary is :"<<NetSalary<<std::endl;

  return 0;

}

