#include <iostream>
/* started by Mike Hewitt 
 * about 24.01.2017
 * routines to create pythagorean triplets
 * for odd AND even numbers
 * inspired by friesian.com and a book by Simon Singh
 */

using namespace std;
const int SIZE = 10;
const int MAXTRIPLE = 25;
class pythagtriple {
 private:int a, b, c;
 public:
	 pythagtriple() {
		cout << "Constructor called!" << endl;
		a = b = c = 0;
	} void seta(int len) {
		a = len;
	}
	int geta() {
		return a;
	}
	void setb(int len) {
		b = len;
	}
	int getb() {
		return b;
	}
	void setc(int len) {
		c = len;
	}
	int getc() {
		return c;
	}
	void showtriple() {
		cout << "a,b,c are " << a << " " << b << " " << c << " " <<
		    endl;
	}
	int oddb() {
		b = ((a * a) - 1) / 2;
		return b;
	}
	int evenb() {
		b = ((a / 2) * (a / 2)) - 1;
		return b;
	}
	int oddc() {
		c = b + 1;
		return c;
	}
	int evenc() {
		c = b + 2;
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
{private:
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

int main()
{
	// int dummyb, dummyc;
	cout << "starting..." << endl;
	pythagtriple pythagtriple;

	for (int cv = 3; cv < MAXTRIPLE; cv = cv + 2) {
		int dummyb, dummyc;
		cout << "start loop... " << endl;
		pythagtriple.seta(cv);
		//    cout << "oddb = " << 
		dummyb = pythagtriple.oddb();	// () << endl;
		//    cout << "oddc = " << 
		dummyc = pythagtriple.oddc();	// () << endl;
		pythagtriple.showtriple();
		if (((pythagtriple.geta() * pythagtriple.geta()) +
		     (pythagtriple.getb() * pythagtriple.getb())) ==
		    (pythagtriple.getc() * pythagtriple.getc())) {
			cout << "test passed : " << pythagtriple.geta() << endl;
		}
		//     pythagtriple.showtriple ();
		cout << "values = " << pythagtriple.geta() << " " <<
		    pythagtriple.getb() << " " << pythagtriple.getc() << endl;
		// a test now
		// (a*a) + (b*b) = (c*c)
	}

	cout << "Now for the evens..." << endl;
	for (int cv = 4; cv < MAXTRIPLE; cv = cv + 2) {
		int dummyb, dummyc;
		cout << "start loop... " << endl;
		pythagtriple.seta(cv);
		//     pythagtriple.showtriple ();
		// cout << "evenb = " <<
		dummyb = pythagtriple.evenb();	// << endl;
		// cout << "evenc = " <<
		dummyc = pythagtriple.evenc();	// << endl;
		pythagtriple.showtriple();
	}
//  p1.setb (3);
//  p1.setc (3);
// following two lines commented as unsure their effects ATM
	// safearray A;
	// cout << "Value of A[ 2] : " << A[2] << endl;
	return 0;
}
