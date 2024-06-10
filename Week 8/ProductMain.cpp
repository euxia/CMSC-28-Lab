/*
    Filename: ProductMain.cpp
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This program will get the info's for electronic and clothing as a product . All with the usage of OOP's encapsulation and inheritance.
    Date: May 24, 2024
*/

#include <iostream>
#include "ProductInventory.h"
#include <limits>

int main() {
    // Create an instance of the Electronics class
    Electronics electronics;
    
    // Get user input for the attributes of the Electronics class
    std::string name, brand, description, color, size, category, model, technicalspecs;
    float price, warranty;
    int quantity;
    
    std::cout << "\n--------------------------------------------" << std::endl;
    std::cout << "\nPopulating Electronics' Information" << std::endl;

    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    electronics.setName(name);

    std::cout << "Enter brand: ";
    std::getline(std::cin, brand);
    electronics.setBrand(brand);
    
    std::cout << "Enter price (PHP): ";
    std::cin >> price;
    electronics.setPrice(price);
    
    std::cout << "Enter quantity: ";
    std::cin >> quantity;
    electronics.setQuantity(quantity);
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter description: ";
    std::getline(std::cin, description);
    electronics.setDescription(description);

    std::cout << "Enter size: ";
    std::getline(std::cin, size);
    electronics.setSize(size);

    std::cout << "Enter color: ";
    std::getline(std::cin, color);
    electronics.setColor(color);

    std::cout << "Enter category: ";
    std::getline(std::cin, category);
    electronics.setCategory(category);
    
    std::cout << "Enter model: ";
    std::getline(std::cin, model);
    electronics.setModel(model);
    
    std::cout << "Enter warranty (in years): ";
    std::cin >> warranty;
    electronics.setWarranty(warranty);
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter technical specs: ";
    std::getline(std::cin, technicalspecs);
    electronics.setTechnicalSpecs(technicalspecs);
    
    // Create an instance of the Clothing class
    Clothing clothing;
    
    // Get user input for the attributes of the Clothing class
    std::string material;
    std::cout << "\n--------------------------------------------" << std::endl;
    std::cout << "\nPopulating Clothing's Information" << std::endl;
    
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    clothing.setName(name);
    
    std::cout << "Enter brand: ";
    std::getline(std::cin, brand);
    clothing.setBrand(brand);
    
    std::cout << "Enter price (PHP): ";
    std::cin >> price;
    clothing.setPrice(price);
    
    std::cout << "Enter quantity: ";
    std::cin >> quantity;
    clothing.setQuantity(quantity);
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter description: ";
    std::getline(std::cin, description);
    clothing.setDescription(description);
    
    std::cout << "Enter size: ";
    std::getline(std::cin, size);
    clothing.setSize(size);

    std::cout << "Enter color: ";
    std::getline(std::cin, color);
    clothing.setColor(color);
    
    std::cout << "Enter category: ";
    std::getline(std::cin, category);
    clothing.setCategory(category);

    std::cout << "Enter material: ";
    std::getline(std::cin, material);
    clothing.setMaterial(material);

    std::cout << "\n--------------------------------------------" << std::endl;
    std::cout << "\nElectronics' Information" << std::endl;
    std::cout << "Name: " << electronics.getName() << std::endl;
    std::cout << "Brand: " << electronics.getBrand() << std::endl;
    std::cout << "Price (PHP): " << electronics.getPrice() << std::endl;
    std::cout << "Quantity: " << electronics.getQuantity() << std::endl;
    std::cout << "Description: " << electronics.getDescription() << std::endl;
    std::cout << "Size: " << electronics.getSize() << std::endl;
    std::cout << "Color: " << electronics.getColor() << std::endl;
    std::cout << "Category: " << electronics.getCategory() << std::endl;
    std::cout << "Model: " << electronics.getModel() << std::endl;
    std::cout << "Warranty (years): " << electronics.getWarranty() << std::endl;
    std::cout << "Technical Specs: " << electronics.getTechnicalSpecs() << std::endl;

    std::cout << "\n--------------------------------------------" << std::endl;
    // Print the attributes of the Clothing class
    std::cout << "\nClothing's Information" << std::endl;
    std::cout << "Name: " << clothing.getName() << std::endl;
    std::cout << "Brand: " << clothing.getBrand() << std::endl;
    std::cout << "Price (PHP): " << clothing.getPrice() << std::endl;
    std::cout << "Quantity: " << clothing.getQuantity() << std::endl;
    std::cout << "Description: " << clothing.getDescription() << std::endl;
    std::cout << "Size: " << clothing.getSize() << std::endl;
    std::cout << "Color: " << clothing.getColor() << std::endl;
    std::cout << "Category: " << clothing.getCategory() << std::endl;
    std::cout << "Material: " << clothing.getMaterial() << std::endl;
    std::cout << "\n--------------------------------------------" << std::endl;

    return 0;
}