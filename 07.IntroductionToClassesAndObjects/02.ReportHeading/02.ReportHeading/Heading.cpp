#include "Heading.h"
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
Heading::Heading() {
	_company = "ABC Industries";
	_report = "Report";
}
Heading::Heading(std::string company, std::string report) {
	_company = company;
	_report = report;
}
std::string Heading::getCompany() {
	return _company;
}
void Heading::setCompany(std::string company) {
	_company = company;
}
std::string Heading::getReport() {
	return _report;
}
void Heading::setReport(std::string report) {
	_report = report;
}
void Heading::printShortReport() {
	std::cout << _company << " " << _report << " report" << std::endl;
}
void Heading::printLongReport() {
	for (int i = 0; i < 20; i++) {
		std::cout << " ";
	}
	for (int i = 0; i < 80; i++) {
		std::cout << "*";
	}
	std::cout << std::endl;
	for (int i = 0; i < ((120 - _company.length()) / 2); i++) {
		std::cout << " ";
	}
	std::cout << _company << std::endl;
	for (int i = 0; i < ((120 - _report.length()) / 2); i++) {
		std::cout << " ";
	}
	std::cout << _report << std::endl;
	for (int i = 0; i < 20; i++) {
		std::cout << " ";
	}
	for (int i = 0; i < 80; i++) {
		std::cout << "*";
	}
}