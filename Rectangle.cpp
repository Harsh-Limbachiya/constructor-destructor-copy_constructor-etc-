
/* ------------------------------------------------------
Workshop 8 part 1
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : Rectangle.cpp
date     : 23-03-2022
-----------------------------------------------------------*/
/*I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments*/

#include<cstring>
#include "Rectangle.h"
using namespace std;
namespace sdds
{
	Rectangle::Rectangle()
	{
		m_height = 0;
		m_width = 0;
	}
	//constructor 
	Rectangle::Rectangle(const char* str, int width, int heigth) : LblShape(str)
	{
		int len = strlen(label()) + 2;
		if (heigth < 3 || width < len)
		{
			m_height = 0;
			m_width = 0;
		}
		else
		{
				
				m_height = heigth;
				m_width = width;
		}
	}
	//destructor 
	Rectangle::~Rectangle()
	{
	}
	//overrides teh getSpecs function of the base class
	void Rectangle::getSpecs(std::istream& istr)
	{
		int height, width;
		LblShape::getSpecs(istr);
		istr >> width;
		if (istr.peek() == ',')
		{
			istr.ignore(1, ',');
		}
		istr >> height;
		istr.ignore(20, '\n');
		m_width = width;
		m_height = height;

	}
	//overrides the draw function of the base class
	void Rectangle::draw(std::ostream& ostr) const
	{
		int widht_size = m_width - 2;
		if (m_width != 0 && m_height != 0)
		{
			//first line
			ostr << "+";
			for (int i = 0; i < widht_size; i++)
			{
				ostr << "-";
			}
			ostr << "+" << endl;
			//second line
			ostr << "|";
			ostr.width(widht_size);
			ostr.setf(ostream::left);
			ostr << label();
			ostr.unsetf(ostream::left);
			ostr << "|" << endl;
			//third line 
			for (int j = 0; j < m_height - 3; j++)
			{
				ostr << "|";
				ostr.width(widht_size);
				ostr << " ";
				ostr << "|" << endl;
			}
			//fourth line 
			ostr << "+";
			for (int i = 0; i < m_width - 2; i++)
			{
				ostr << "-";
			}
			ostr << "+";
		}
	}

}

