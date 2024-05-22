#include <iostream>

class Name {
    private:
        std::string fname;
        std::string lname;
    public:
        Name(){};

        std::string getfname(){
            return fname;
        }

        std::string getlname(){
            return lname;
        }

        void setfname(std::string firstname) {
            fname = firstname;
        }

        void setlname(std::string lastname) {
            lname = lastname;
        }
};
