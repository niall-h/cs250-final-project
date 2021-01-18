/****************************
	CodeX

	Htet, Niall
	Meng, Ramy
	Park, Juyoung

	CS A250 - Fall 2020

	Project 1
****************************/

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <string>

class Student: public Person
{
public:
	// default constructor
	Student();

	// setStudentInfo
	void setStudentInfo(const std::string& firstName,
		const std::string& lastName, int id, bool tuitionPaid,
		const std::multimap<Course, char>& courses);

	// getID
	int getID() const;

	// getNumberOfCourses
	int getNumberOfCourses() const;

	// getUnitsCompleted
	double getUnitsCompleted() const;

	// getGpa
	double getGpa() const;

	// isTuitionPaid
	bool isTuitionPaid() const;

	// courseIsCompleted
	bool courseIsCompleted(const std::string& prefix, int courseNo) const;

	// printStudent
	void printStudent() const;

	// printStudentInfo
	void printStudentInfo() const;

	// destructor
	~Student();

private:
    int studentID;
    bool tuitionWasPaid;
	int totalCourses;
	std::multimap<Course, char> coursesCompleted;
};

#endif


