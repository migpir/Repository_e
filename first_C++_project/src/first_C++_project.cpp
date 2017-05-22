//============================================================================
// Name        : first_C++_project.cpp
// Author      : Miguel H. Peralta
// Version     :
// Copyright   : Your copyright notice
// Description : C++ practice tutorial
//             : version 1.0  how to print on stdout using std::cout
//             : 1.0 print "Hello World" to standard output
//             : 1.1 remove std:: by adding namespace
//             : 1.2 Define and initialize 6 data types and output to screen
//============================================================================

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {

	const double PI = 3.1428576;
	int myAge = 39;
	char myGrade = 'A';
	bool isHappy = true;
	float Num = 2.1418281828459045;
	double  favnum = 3.245678;

	cout<<"PI is equal to "<<PI<<endl;
	cout<<"myAge is  "<<myAge<<endl;
	cout<<"myGrade is equal to "<<myGrade<<endl;
	cout<<"Am I happy? "<<isHappy<<endl;
	cout<<"Num is equal to "<<Num<<endl;
	cout<<"favnum is equal to "<<favnum<<endl;

	return 0;
}
