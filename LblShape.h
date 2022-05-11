/* ------------------------------------------------------
Workshop 8 part 1
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : LblShape.h
date     : 23-03-2022
-----------------------------------------------------------*/
/*I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments*/


#ifndef _LBLSHAPE_H_
#define _LBLSHAPE_H_
#pragma once
#include"Shape.h"
namespace sdds
{

	class LblShape : public Shape
	{
		char* m_label{};
	protected:
		// return the label of the class protected access
		char* label()const;
	public:
		//constructor 
		LblShape(const char* label = nullptr);
		//destructor 
		~LblShape();
		//copy constructor 
		LblShape(const LblShape&) = delete;
		//copy assignment operator
		LblShape& operator=(const LblShape&) = delete;
		//overriding getSpecs member function of base class 
		void getSpecs(std::istream&);
	};
}

#endif // !_LBLSHAPE_H_



