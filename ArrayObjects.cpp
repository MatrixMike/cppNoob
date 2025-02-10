//#include<iostream.h>
//#include<conio.h>
#include <iostream>
namespace std {
  template <typename _CharT, typename _Traits>
  inline basic_ostream<_CharT, _Traits> &
  tab(basic_ostream<_CharT, _Traits> &__os) {
    return __os.put(__os.widen('\t'));
  }
}
using namespace std;
// ArrayObjects.cpp:5: style: The class 'Employee' does not have a constructor.
// remember to try cppcheck and discover easy-fix warnings
       class Employee
       {

              int Id;
              char Name[25];
              int Age;
              long Salary;

              public:
              void GetData()           //Statement 1 : Defining GetData()
              {
                    cout<< std::endl<< std::tab<<"Enter Employee Id : ";
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
		   Employee(){
//			   ArrayObjects.cpp:41: warning: Member variable 'Employee::Id' is not initialized in the constructor.
		   }
       };


       int main()
       {

              int i;

              Employee E[3];           //Statement 3 : Creating Array of 3 Employees
				cout << "Enter 3 employees"<<std::endl;
              for(i=0;i<3;i++)
              {
                    cout<< std::endl<<"Enter details of "<<i+1<<" Employee";
                    E[i].GetData();
              }

              cout<< std::endl<<"Details of Employees";
              for(i=0;i<3;i++)
              E[i].PutData();

       }
