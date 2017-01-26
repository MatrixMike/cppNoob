#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int len;

//      int Number = 123;       // number to be converted to a string

	string Result;		// string which will contain the result

	ostringstream convert;	// stream used for the conversion

// copy str1 into str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;
// concatenates str1 and str2
	for (int cv = 1; cv < 5; cv++) {
		str3 = str3 + str2;
		str3 = str3 + " MJH ";
		convert << cv;	// insert the textual representation of 'Number' in the characters in the stream

		Result = convert.str();	// set 'Result' to the contents of the stream
		str3 = str3 + Result;
	}
	cout << "str1 + str2 : " << str3 << endl;
// total lenghth of str3 after concatenation
	len = str3.size();
	cout << "str3.size() : " << len << endl;
	return 0;
}
