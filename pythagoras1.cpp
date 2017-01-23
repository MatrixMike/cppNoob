#include <iostream>
using namespace std;
const int SIZE = 10;

class pythagtriple
{
private:int a, b, c;
public:
    pythagtriple ()
  {
    cout << "Constructor called!" << endl;
  }


  void seta (int len)
  {
    a = len;
  }
  void setb (int len)
  {
    b = len;
  }
  void setc (int len)
  {
    c = len;
  }
  void showtriple ()
  {
    cout << "a,b,c are " << a << " " << b << " " << c << " " << endl;
  }
  int oddb ()
  {
    b = ((a * a) - 1) / 2;
    return b;
  }
  int oddc ()
  {
    c = b + 1;
    return c;
  }

/* need to note that formulae for triples based on odd a and for even a are known
 *  odd :	b= (a*a) -1
 * 			c= b+1
 * 
 * 
 */

};

/*class safearray
{
private:
  int arr[SIZE];
public:
    safearray ()		// constructor that initialises storage
  {
    register int i;
    for (i = 0; i < SIZE; i++)
      {
	arr[i] = i * i;
      }
  }
};
*/

int
main ()
{
  cout << "starting..." << endl;
  pythagtriple pythagtriple;
  pythagtriple.seta (7);
  pythagtriple.showtriple ();
  cout << "oddb = " << pythagtriple.oddb () << endl;
  cout << "oddc = " << pythagtriple.oddc () << endl;
//  p1.setb (3);
//  p1.setc (3);


// following two lines commented as unsure their effects ATM
  // safearray A;
  // cout << "Value of A[ 2] : " << A[2] << endl;
  return 0;
}
