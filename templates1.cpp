/*
 * templates1.cpp
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
using namespace std;
#define define_max(type) type max(type d1, type d2) 	{	\
		if (d1 > d2) 									\
			return (d1);								\
		return (d2);								\
}
 define_max(int);
 define_max(float);
 define_max(char);
 

/*	template < class kind > 
	kind max(kind d1, kind d2) {
		if (d1 > d2)
			return (d1);
		return (d2);
	}
	*/
	
int main(int argc, char **argv)
{
	float f = max(3.5, 8.7);
	cout << "using templates: f = " << f << endl;
	return 0;
}
