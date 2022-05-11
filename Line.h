/* ------------------------------------------------------
Workshop 8 part 1
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : Line.h
date     : 23-03-2022
-----------------------------------------------------------*/
/*I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments*/

#ifndef _LINE_H_
#define _LINE_H_
#pragma once
#include"LblShape.h"
namespace sdds
{
	class Line : public LblShape
	{
		int m_length{};
	public:
		//constructor invoked 
		Line(const char* str = nullptr, int length = 0);  
		//destructor 
		~Line();
		//overriding getSpecs function of base class
		void getSpecs(std::istream&);
		//overrides  the draw function of base class
		void draw(std::ostream&) const;
	};
}
#endif // !_LINE_H_



