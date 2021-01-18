/****************************
	CodeX

	Htet, Niall
	Meng, Ramy
	Park, Juyoung

	CS A250 - Fall 2020

	Project 1
****************************/

#ifndef EXCEPTIONHANDLER_H
#define EXCEPTIONHANDLER_H

#include <iostream>
#include <string>
#include <algorithm>

class ExceptionHandler
{
public:
	ExceptionHandler() {};
	~ExceptionHandler() {};

	int validateSelection(const std::string& input) const;
	bool lastNameValid(std::string& input) const;
	bool validateID(const std::string& input, int& id) const;
	bool validateCoursePrefix(std::string& input) const;
	bool validateCourseNo(const std::string& input, 
		int& courseNo) const;
};

#endif
