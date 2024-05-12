//UnivMember.cpp 

#include <iostream>
#include <string>
#include "ID.h"
#include "Name.h"
#include "UnivMember.h"
using namespace std;

UnivMember::UnivMember(){
        Role = "";
        UnivID = ID();
        UnivName = Name();
}

UnivMember::UnivMember(string fullName, string myRole){
        UnivName = Name(fullName);
        Role = myRole;
}

UnivMember::UnivMember(ID myID, string fullName){
	UnivID = myID; 
	UnivName = Name(fullName); 
}

UnivMember::UnivMember(ID myID, string fullName, string myRole) {
    UnivID = myID;
    UnivName = Name(fullName);
    Role = myRole;
}

void UnivMember::printFunction(){
        cout << Role << ": ";
        UnivName.printName();
        cout << "ID: " << UnivID.GetFullID() << endl;
}
            
         
