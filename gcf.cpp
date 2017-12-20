/*
 * gcf.cxx
 * 
 * Copyright 2017 mikeh <mikeh@mikeh-desktop>
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

int hcf (int n1, int n2);

int
main ()
{
  int n1, n2;

  cout << "Enter two positive integers: ";
  cin >> n1 >> n2;

  cout << "H.C.F of " << n1 << " & " << n2 
		<< " is: " << hcf (n1, n2) << endl ;

  return 0;
}

int
hcf (int n1, int n2)
{
  if (n2 != 0)
    {
      cout << "debug : " << n2 << " : " << n1 << endl;
      return hcf (n2, n1 % n2);
    }
  else
    return n1;
}
