/* ------------------------------------------------------
Workshop 8 part 1
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : Rectangle.h
date     : 23-03-2022
-----------------------------------------------------------*/
/*I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments*/

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#pragma once
#include"LblShape.h"
namespace sdds
{
	class Rectangle : public LblShape
	{
		int m_width{};
		int m_height{};
	public:
	
		//constructor 
		Rectangle();
		Rectangle(const char* str, int width = 0, int heigth = 0);
		//destructor 
		~Rectangle();
		//overrides teh getSpecs function of the base class
		void getSpecs(std::istream&);
		//overrides the draw function of the base class
		void draw(std::ostream&) const;
	};
}

#endif // !_RECTANGLE_H_



