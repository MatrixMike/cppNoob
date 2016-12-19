/*
 * phyllisFor.c
 * 
 * Copyright 2016 Mike Hewitt <mikeh@mikeh-Latitude-D830>
 * converted and still showing signs of Arduino origin
 * 
 */
#include <iostream>

int monthNow = 0;
int week = 7;
int fortnight = 14;
const int monthsInYear = 12;	// if array is oversized elements are zero filled

/*void   printDayMonth(int DayNow) {
  Serial.print("A Fri in the month is  \'");
  Serial.println(DayNow);
  delay(1000);

}
 */
int main(int argc, char **argv)
{   
	int year[monthsInYear] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// days in months        
	std::cout << "Hello World!" << std::endl;
	int daysInYear = 0;
	for (int mths = 0; mths < monthsInYear; mths++) {
//              Serial.print(" mths "); Serial.print(year[mths]);Serial.print(" ");     Serial.println(1 + mths);
		std::cout << " mths ";
		std::cout << year[mths];
		std::cout << " ";
		std::cout << 1 + mths;
		daysInYear = daysInYear + year[mths];
		std::cout << std::endl;
//              std::cout << daysInYear ; // + " " + "\n";
//              Serial.println(daysInYear);

	}
	std::cout << daysInYear;
	std::cout << std::endl;
	return 0;
}
