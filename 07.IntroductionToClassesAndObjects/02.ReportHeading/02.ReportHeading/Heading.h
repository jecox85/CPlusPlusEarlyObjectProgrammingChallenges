#pragma once
#include <string>
#include <iostream>
/*
		Design a class called Heading that has data members to hold the company name and the
		report name.
			-	A two-parameter default constructor should allow these to be specified at the
				time a new Heading object is created.
			-	If the user creates a Heading object without passing any arguments,
				"ABC Industries" should be used as a default value for the company name and
				"Report'' should be used as a default for the report name.
			-	The class should have member functions to print a heading in either one-line
				format, as shown here :
					Pet Pals Payroll Report
				or in four - line ''boxed'' format, as shown here :
					*********************************************
									Pet Pals
								Payroll Report
					*********************************************
			-	Try to figure out a way to center the headings on the screen, based on their lengths.
			-	Demonstrate the class by writing a simple program that uses it.
		*/
class Heading
{
private:
	std::string _company;
	std::string _report;
public:
	Heading();
	Heading(std::string company, std::string report);
	std::string getCompany();
	void setCompany(std::string company);
	std::string getReport();
	void setReport(std::string report);
	void printShortReport();
	void printLongReport();
};