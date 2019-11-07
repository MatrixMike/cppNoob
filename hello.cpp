#include <iostream>
#include "functions.h"

void print_hello(){
   std::cout << "Hello World!  0O" << std::endl;
   std::cout << 123    << '\n'
          << 0123   << '\n'
          << 0177   << '\n';
}

int main()
{int length = 2;
	if ( length == 2)
	{
	print_hello();
	}
	return(0);
}
