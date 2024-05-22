#include <iostream>

class Lake {
    private:
        std::string name;
        std::string location;
        double depth;
    public:
        Lake(std::string Name, std::string Location, double Depth) {
            name = Name;
            location = Location;
            depth = Depth;
        }
        void displayF() {
            std::cout << "Lake Characteristics" << std::endl;
            std::cout << "Name: " << name << std::endl;
            std::cout << "Location: " << location << std::endl;
            std::cout << "Depth (m): " << depth << std::endl;
        }

};

int main(){
    Lake lake1("Mahogany", "Marbel", 100.00);
    lake1.displayF();

    return 0;
}