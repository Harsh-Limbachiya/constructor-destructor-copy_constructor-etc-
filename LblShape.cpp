/* ------------------------------------------------------
Workshop 8 part 1
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : LblShape.cpp
date     : 23-03-2022
-----------------------------------------------------------*/
/*I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments*/

#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "LblShape.h"
#include<cstring>
using namespace std;
namespace sdds{
	// return the label of the class protected access
	char* LblShape::label() const
	{
		return m_label;
	}
	//constructor 
	LblShape::LblShape(const char* label)
	{
		if (label != nullptr)
		{
			delete[] m_label;
			m_label = new char[strlen(label) + 1];
			strcpy(m_label, label);
		}
	}
	//destructor 
	LblShape::~LblShape()
	{
		delete[] m_label;
	}
	//overriding getSpecs member function of base class 
	void LblShape::getSpecs(std::istream& istr)
	{
		std::string str;
		char delimeter = ',';
		if (getline(istr, str, delimeter))
		{
			delete[] m_label;
			m_label = new char[str.length() + 1];
			strcpy(m_label, str.c_str());
		}
	}

}
