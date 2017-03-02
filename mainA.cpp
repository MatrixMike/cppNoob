#include <iostream>
using namespace std;
const int SIZE = 10;

class safearray {
 private:
	int arr[SIZE];
 public:
	 safearray()		// constructor that initialises storage
	{
		register int i;
		for (i = 0; i < SIZE; i++) {
			arr[i] = i * i;
	}} 

};

int main()
{
	safearray A;

	cout << "Value of A[ 2] : " << A[2] << endl;
	cout << "Value of A[ 5] : " << A[5] << endl;
	cout << "Value of A[12] : " << A[12] << endl;
// same effect as above in one line...
	cout << "Value of A[ 2] : " << A[2] << endl << "Value of A[ 5] : " << A[5] << endl << "Value of A[12] : " << A[12] << endl;

	return 0;
}
