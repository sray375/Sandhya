//sray15
#ifndef NAME_H
#define NAME_H

#include <iostream>
#include <string>
using namespace std;

class Name {
private:
        string fname;
        string lname;

public:
        Name(); //default constructor
        Name(string userName); //constructor 
        string getFirstName() const; //function declaration 
        string getLastName() const; //function declaration 
        void printName(); //function declaration
	string getFullName() const;  
};

#endif
