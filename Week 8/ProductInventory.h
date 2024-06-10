/*
    Filename: ProductInventory.h
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This is the header file. This program will get the info's for electronic and clothing as a product . All with the usage of OOP's encapsulation and inheritance.
    Date: May 24, 2024
*/

#include <iostream>
// use include guards to avoid duplication of inclusion to the main program
#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
    // private attributes encapsulated
    private:
        std::string name;
        std::string brand;
        float price;
        int quantity;
        std::string description;
        std::string size;
        std::string color;
        std::string category;
    public:
        // Getters
        // Used const to not directly define the object attributes
        std::string getName() const { return name; }
        std::string getBrand() const { return brand; }
        float getPrice() const { return price; }
        int getQuantity() const { return quantity; }
        std::string getDescription() const { return description; }
        std::string getSize() const { return size; }
        std::string getColor() const { return color; }
        std::string getCategory() const { return category; }

        // Setters
        // Used const for the same principle and use reference for large strings such as description.
        void setName(const std::string& name) { this->name = name; }
        void setBrand(const std::string& brand) { this->brand = brand; }
        void setPrice(float price) { this->price = price; }
        void setQuantity(int quantity) { this->quantity = quantity; }
        void setDescription(const std::string& description) { this->description = description; }
        void setSize(const std::string& size) { this->size = size; }
        void setColor(const std::string& color) { this->color = color; }
        void setCategory(const std::string& category) { this->category = category; }
};

class Clothing : public Product {
    private: // encapsulated uniqute attributes
        std::string material;
    public:
        // Getters
        // use const for read only
        std::string getMaterial() const { return material; }
        // Setters
        // uses referenced const for large strings
        void setMaterial(const std::string& material) { this->material = material; }
};     

class Electronics : public Product {
    private: // encapsulated uniqute attributes
        std::string model;
        float warranty;
        std::string technicalspecs;
    public:
        // Getters
        std::string getModel() const { return model; }
        float getWarranty() const { return warranty; }
        std::string getTechnicalSpecs() const { return technicalspecs; }

        // Setters, use const and reference 
        void setModel(const std::string& model) { this->model = model; }
        void setWarranty(float warranty) { this->warranty = warranty; }
        void setTechnicalSpecs(const std::string& technicalspecs) { this->technicalspecs = technicalspecs; }
};

#endif