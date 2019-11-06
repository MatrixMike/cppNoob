#include <iostream>
using namespace std;

typedef int (*IntFunctionWithOneParameter) (int a);

int function(int a){ return a; }
int functionTimesTwo(int a){ return a*2; }
int functionDivideByTwo(int a){ return a/2; }

int main()
{
    IntFunctionWithOneParameter functions[] = 
    {
        function, 
        functionTimesTwo, 
        functionDivideByTwo,
                function,
    };

    for(int i = 0; i < 4; ++i)
    {
        cout << functions[i](8) << endl;
    }
}
