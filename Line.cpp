
/* ------------------------------------------------------
Workshop 8 part 1
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : Line.cpp
date     : 23-03-2022
-----------------------------------------------------------*/
/*I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments*/


#include "Line.h"
using namespace std;
namespace sdds
{
	//constructor invoked 
	sdds::Line::Line(const char* str, int length) : LblShape(str)
	{
		m_length = length;
	}
	//destructor 
	sdds::Line::~Line()
	{
	}
	//overriding getSpecs function of base class
	void sdds::Line::getSpecs(std::istream& istr)
	{
		int length;
		LblShape::getSpecs(istr);
		istr >> length;
		m_length = length;
		istr.ignore(20, '\n');
	}
	//overrides  the draw function of base class
	void Line::draw(std::ostream& ostr) const
	{
		if (m_length > 0 && label() != nullptr)
		{
			ostr << label() << endl;
			for (int i = 0; i < m_length; i++)
			{
				ostr << '=';
			}
		}
	}

}


