//ID.h
#ifndef ID_H 
#define ID_H

using namespace std;
//guardrails
//contains declarations 

class ID {

        private:
                int ID_number; //8 characters (just int)
                string full_ID; //9 characters, includes the A (string)


        public:

                int GetIDnum();
                string GetFullID() const;

                ID();
};

#endif
