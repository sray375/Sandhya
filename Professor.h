//sray15
#include <iostream> 
#ifndef PROFESSOR_H 
#define PROFESSOR_H 
#include <vector>
#include <string> 
#include "UnivMember.h"
#include "Name.h" 

using namespace std; 

class Professor : public UnivMember { 

	private: 

		vector<string> courses; 
		string profName; 
	public: 

		//constructors 
		Professor(); 
		Professor(ID myID, string fullName);  
		
		
		//getter 
		vector<string> getCourse() const;
		string getProfName() const; 

		friend ostream& operator <<(ostream& outs, const Professor& prof);
		friend istream& operator >>(istream& ins, Professor& prof); 
			
}; 	

#endif




