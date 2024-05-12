//sray15

#include <iostream> 
#include <string> 
#include <fstream>
#include <vector> 
#include "Name.h"
#include "ID.h" 
#include "UnivMember.h" 
#include "Professor.h"  
using namespace std; 

int main(){ 

	string line;
	
	string professorFile = "CoursesFall2023.txt"; 
	string professorOutputFile = "ProfID.txt"; 

	ifstream infileProf(professorFile);  
	ofstream outputfileProf(professorOutputFile); 

	//check if input files opened successfully 
	if (!infileProf){ 
		cout << "Failed to open professor input file." << endl; 
		return 1; 
	} 
	


	//check if output files opened succesfully 
	if (!outputfileProf){ 
		cout << "Failed to oepn professor output file." << endl; 
	} 

	vector<string> uniqueProfessors; 

	while(getline(infileProf,line)){
		int pos = line.find('\t'); //finds position of tab (name's starting point) 
		if (pos != string::npos){ 
			string professorName = line.substr(0, pos); //extracts professor's name
			if (professorName != "TBD"){ 
				bool found = false; 
				for (int i = 0; i < uniqueProfessors.size(); ++i){
					if (uniqueProfessors[i] == professorName){ 
						found = true; 
						break;
			 		}
				}
				if (!found){
					Name professor(professorName); 
					ID professorID; //creates a unique ID for prof using ID class
					outputfileProf << "Assigned ID: " << professorID.GetFullID() << " to professor: " << professorName << endl;   
					uniqueProfessors.push_back(professorName); 
				}
			}
		}
	}

 
	string professorName; 
	cout<< "Enter the professor's name (Last,First): "; 
	getline(cin, professorName); 

	vector<string> courses; //vector to hold courses taught by all professors 
	
	Professor prof;
	
	while (infileProf >> prof) {
    		// Using find to search for the professor's name
    		string fullName = prof.getUnivName().getFullName();
    		int pos = fullName.find(professorName);
    		if (pos != string::npos) {
        		vector<string> profCourses = prof.getCourse();
        			for (int i = 0; i < profCourses.size(); ++i) {
            				courses.push_back(profCourses[i]);
        			}
      				break; // Exiting the loop once the professor is found (optional)
    		}
	}	 
	
	//output courses for the specified professor 
	if(!courses.empty()){ 
		cout << "Courses taught by Professor " << professorName << ":" << endl; 
		for (int i = 0; i < courses.size(); ++i){ 
			cout << courses[i] << endl; 
		} 
	} else { 
		cout << "No courses found for Professor " << professorName << endl; 
	} 	

	//close files 
	infileProf.close(); 
	outputfileProf.close(); 


	return 0; 
} 		
