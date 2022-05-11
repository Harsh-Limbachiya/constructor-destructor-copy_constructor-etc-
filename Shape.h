/* ------------------------------------------------------
Workshop 8 part 1
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : Shape.h
date     : 23-03-2022
-----------------------------------------------------------*/
/*I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments*/

#ifndef _SHAPE_H_
#define _SHAPE_H_
#pragma once
#include<iostream>
namespace sdds
{
	class Shape
	{
	public:
		//virtual draw function
		virtual void draw(std::ostream&) const;
		//virtual getSpecs fucntion 
		virtual void getSpecs(std::istream&);
		//virtual destructor 
		virtual ~Shape();
	};
	//insertion operator overload
	std::ostream& operator<<(std::ostream&, Shape&);
	//extraction operator overload
	std::istream& operator>>(std::istream&, Shape&);
}

#endif //_SHAPE_H_


