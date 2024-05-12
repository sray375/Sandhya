//sray15

#include <iostream>
#include "Name.h"
#include <string>
using namespace std;

Name::Name(){
        fname = "First";
        lname = "Last";

}

Name::Name (string wholeLine){
        int pos = wholeLine.find(",");

        lname = wholeLine.substr(0, pos);
        fname = wholeLine.substr(pos+1);

}


//getter definition

string Name::getFirstName() const{
        return fname;
}

string Name::getLastName() const{
        return lname;
}

void Name::printName() {
        cout << fname << lname << endl;
}

string Name::getFullName() const { 
	return fname + " " + lname; 
} 
