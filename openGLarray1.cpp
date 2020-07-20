/*
 * untitledopenGLarray1.cxx
 * 
 * 
 * 
 */

using namespace std;
#include <iostream>

int main(int argc, char **argv)
{
	int x;
	int y;
	int array[8][8];
	for (x=0; x<8; x++) {
		for (y=0; y<8; y++){
			
			array[x][y] = x*y ;
		}
	}
	cout<<"Array Indices:\n";
	for (x=0; x<8; x++) {
		for (y=0; y<8; y++){
			
			array[x][y] = x*y ;
			cout<<"["<<x<<"]["<<y<<"]="<< array[x][y] <<" ";
			cout<<"\n";
		}
	}	
	return 0;
}

