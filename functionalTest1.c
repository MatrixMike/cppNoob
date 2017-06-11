/*
 * functionalTest1.c
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


#include <stdio.h>

int main(int argc, char **argv)
{
	
	return 0;
}
//  
//#include <functional>
//#include <vector>
//#include <iostream>

double eval(std::function <double(double)> f, double x = 2.0)
{
	return f(x);
}

int main()
{
	std::function<double(double)> f0    = [](double x){return 1;};
	auto                          f1    = [](double x){return x;};
	decltype(f0)                  fa[3] = {f0,f1,[](double x){return x*x;}};
	std::vector<decltype(f0)>     fv    = {f0,f1};
	fv.push_back                  ([](double x){return x*x;});
	for(int i=0;i<fv.size();i++)
		std::cout << fv[i](2.0) << std::endl;
	for(int i=0;i<3;i++)
		std::cout << fa[i](2.0) << std::endl;
	for(auto &f : fv)
		std::cout << f(2.0) << std::endl;
	for(auto &f : fa)
		std::cout << f(2.0) << std::endl;
	std::cout << eval(f0) << std::endl;
	std::cout << eval(f1) << std::endl;
	std::cout << eval([](double x){return x*x;}) << std::endl;
	return 0;
}
