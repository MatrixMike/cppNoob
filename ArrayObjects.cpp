//#include<iostream.h>
//#include<conio.h>
#include <iostream>
using namespace std;
// ArrayObjects.cpp:5: style: The class 'Employee' does not have a constructor.
       class Employee
       {
              int Id;
              char Name[25];
              int Age;
              long Salary;

              public:
              void GetData()           //Statement 1 : Defining GetData()
              {
                    cout<< std::endl<<"\tEnter Employee Id : ";
                    cin>>Id;

                    cout<< std::endl<<"\tEnter Employee Name : ";
                    cin>>Name;

                    cout<< std::endl<<"\tEnter Employee Age : ";
                    cin>>Age;

                    cout<< std::endl<<"\tEnter Employee Salary : ";
                    cin>>Salary;
              }

              void PutData()           //Statement 2 : Defining PutData()
              {
                    cout<< std::endl<<Id<<"\t"<<Name<<"\t"<<Age<<"\t"<<Salary;
              }

       };


       int main()
       {

              int i;

              Employee E[3];           //Statement 3 : Creating Array of 3 Employees

              for(i=0;i<3;i++)
              {
                    cout<< std::endl<<"Enter details of "<<i+1<<" Employee";
                    E[i].GetData();
              }

              cout<< std::endl<<"Details of Employees";
              for(i=0;i<3;i++)
              E[i].PutData();

       }
