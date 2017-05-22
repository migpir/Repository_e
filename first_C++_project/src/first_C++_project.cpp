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
//             : 1.3 Use the switch statement
//============================================================================

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {

	int key = 0;

switch (key) {
	case 1:
		cout<<" key = 1"<<endl;

		break;
	case 2:
		cout<<" key = 2"<<endl;

		break;
	case 3:
		cout<<" key = 3"<<endl;

		break;
	case 4:
		cout<<" key = 4"<<endl;

		break;

	default:
		cout<<"No choices selected" << endl;
		break;
}

	return 0;
}
