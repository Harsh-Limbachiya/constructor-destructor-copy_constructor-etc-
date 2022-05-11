
/* ------------------------------------------------------
Workshop 8 part 1
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : Shape.cpp
date     : 23-03-2022
-----------------------------------------------------------*/
/*I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments*/

#include "Shape.h"

namespace sdds
{
	//virtual draw function
	void Shape::draw(std::ostream&) const
	{
	}
	//virtual getSpecs fucntion 
	void Shape::getSpecs(std::istream&)
	{
	}
	//virtual destructor
	Shape::~Shape() 
	{
	}
	//insertion operator overload
	std::ostream& operator<<(std::ostream& ostr, Shape& shape)
	{
		shape.draw(ostr);
		return ostr;
	}
	//extraction operator overload
	std::istream& operator>>(std::istream& istr, Shape& shape)
	{
		shape.getSpecs(istr);
		return istr;
	}

}
