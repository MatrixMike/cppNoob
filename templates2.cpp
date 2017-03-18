/*
 * templates2.cpp
 * 
 * Copyright 2017 Mike Hewitt <mikeh@mikeh-Inspiron-1501>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Max (T const& a, T const& b)  { 
   return a < b ? b:a; 
} 

int main () {
 
   int i = 39;
   int j = 20;
   cout << "Max(i, j): " << Max(i, j) << endl; 

   double f1 = 13.5; 
   double f2 = 20.7; 
   cout << "Max(f1, f2): " << Max(f1, f2) << endl; 

   string s1 = "Hello"; 
   string s2 = "World"; 
   cout << "Max(s1, s2): " << Max(s1, s2) << endl; 

   return 0;
}
/*
#include <iostream>

int main(int argc, char **argv)
{
	
	return 0;
}
*/

