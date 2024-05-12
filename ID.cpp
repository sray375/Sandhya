//sray15

#include <iostream>
#include <string>
#include "ID.h"
using namespace std;

ID::ID(){
        static int currentNumber = 10000000;

        int ID_number = currentNumber++;
        full_ID = "A"+ to_string(ID_number);
}

//getter defintions

int ID::GetIDnum(){
        return ID_number;
}

string ID::GetFullID() const {
        return full_ID;
}

