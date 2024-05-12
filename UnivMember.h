//sray15

#include <iostream>
#include "Name.h"
#include "ID.h"
#include <string>

#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H
using namespace std;

class UnivMember{
        protected:
                ID UnivID;
                Name UnivName;
                string Role;

        public:

                UnivMember();
		UnivMember(ID myID, string fullName, string Role);
                UnivMember (ID myID, string fullName);
		UnivMember(string fullName,string Role);
                void printFunction();
		Name getUnivName()const{return UnivName;} 
};

#endif
    
