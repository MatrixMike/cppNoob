#include <iostream>
using namespace std;
// https://www.tutorialspoint.com/cplusplus/cpp_dynamic_memory.htm

class Box
{
public:
  Box ()
  {
    cout << "Constructor called!" << endl;
  }

   ~Box ()
  {
    cout << "Destructor called!" << endl;
  }
};

int
main ()
{
  Box *myBoxArray = new Box[4];	// create array of type Box like create array of type int etc
  // the type here is a class which when created invokes the constructor

  delete[]myBoxArray;		// Delete array
  Box *b = new Box;
  return 0;
}
