#include <iostream>
 // https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm
using namespace std;
 
// Base class
class Shape  {

public:
   // pure virtual function providing interface framework.
   virtual int getArea() = 0;
	
   void setWidth(int w) {
      width = w;
   }
	
   void setHeight(int h) {
      height = h;
   }
	
protected:
   int width;
   int height;
};
 
// Derived classes
class Rectangle: public Shape {

public:
   int getArea() { 
      return (width * height); 
   }
   public:
   int getPerimeter() {
	   return ((width + height)*2);
   }
};

class Triangle: public Shape {

public:
   int getArea() { 
      return (width * height)/2; 
   }
};
 
int main(void) {
   Rectangle Rect;
   Triangle  Tri;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   // Print the area of the object.
   cout << "Total Rectangle area: " << Rect.getArea() << endl;

   Tri.setWidth(5);
   Tri.setHeight(7);
	
   // Print the area of the object.
   cout << "Total Triangle area: " << Tri.getArea() << endl; 
   
   // Now Print the perimeter 
   cout << "Total Rectangle perimeter: " << Rect.getPerimeter() << endl; 
   return 0;
}
