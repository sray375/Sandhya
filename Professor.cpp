//sray15

#include <iostream> 
#include <vector>
#include "Professor.h" 
#include "UnivMember.h" 
#include "Name.h" 
#include "ID.h" 

using namespace std; 


//constructors
Professor::Professor(): UnivMember() {
	Role = "Professor"; 
} 


Professor::Professor(ID myID, string fullName) : UnivMember(myID, fullName) { 
	Role = "Professor"; 
} 

//getters 
vector<string> Professor::getCourse() const{ 
	return courses; 
} 

//friend functions 

ostream& operator<<(ostream& outs, const Professor& prof){ 
	outs << "Professor: " << prof.UnivName.getFullName() << endl;  
	return outs; 
} 


istream& operator>>(istream& ins, Professor& prof){ 
	string fullName; 
	string course; 
	
	//read full name and course from input stream 
	ins >> fullName >> course;  

	//set full name and course for Professor object
	prof.UnivName = Name(fullName); 
	prof.courses.push_back(course);	

	return ins; 
} 
