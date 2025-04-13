#include <iostream>
#include<vector>
#include <ctime> 
#include <string>

using namespace std;

// Class to represent a Dairy Animal
class DairyAnimal {
public:
    string name;
    string breed;
    double milkProduction; // in liters per day

    DairyAnimal(string n, string b, double mp) : name(n), breed(b), milkProduction(mp) {}
};

// Class to represent Fodder
class Fodder {
public:
    string type;
    double quantity; // in kg

    Fodder(string t, double q) : type(t), quantity(q) {}
};

// Class to represent Dairy Products
class DairyProduct {
public:
    string productName;
    double price; // price per liter or kg

    DairyProduct(string pn, double p) : productName(pn), price(p) {}
};

// Class to represent the Dairy Management System
class DairyManagement {
private:
    vector<DairyAnimal> animals;
    vector<Fodder> fodders;
    vector<DairyProduct> products;
    double laborCost;
    double transportCost;

public:
    DairyManagement() : laborCost(0), transportCost(0) {}

    void addAnimal(const DairyAnimal& animal) {
        animals.push_back(animal);
    }

    void addFodder(const Fodder& fodder) {
        fodders.push_back(fodder);
    }

    void addProduct(const DairyProduct& product) {
        products.push_back(product);
    }

    void setLaborCost(double cost) {
        laborCost = cost;
    }

    void setTransportCost(double cost) {
        transportCost = cost;
    }

    double calculateTotalMilkProduction() {
        double total = 0;
        for (const auto& animal : animals) {
            total += animal.milkProduction;
        }
        return total;
    }

    void displayInfo() {
        cout << "Dairy Animals:\n";
        for (const auto& animal : animals) {
            cout << "Name: " << animal.name << ", Breed: " << animal.breed 
                 << ", Milk Production: " << animal.milkProduction << " liters/day\n";
        }

        cout << "\nFodder:\n";
        for (const auto& fodder : fodders) {
            cout << "Type: " << fodder.type << ", Quantity: " << fodder.quantity << " kg\n";
        }

        cout << "\nDairy Products:\n";
        for (const auto& product : products) {
            cout << "Product Name: " << product.productName << ", Price: $" << product.price << "\n";
        }

        cout << "\nLabor Cost: $" << laborCost << "\n";
        cout << "Transport Cost: $" << transportCost << "\n";
        cout << "Total Milk Production: " << calculateTotalMilkProduction() << " liters/day\n";
    }
};

int main() {
    DairyManagement dairy;

    // Adding animals
    dairy.addAnimal(DairyAnimal("khush", "Holstein", 25.0));
    dairy.addAnimal(DairyAnimal("Daisy", "Jersey", 20.0));
    dairy.addAnimal(DairyAnimal("bella","jersey",22.0));
    dairy.addAnimal(DairyAnimal("mrit","desi",30.0));
    dairy.addAnimal(DairyAnimal("saddu","jersey",20.0));
    dairy.addAnimal(DairyAnimal("blonde","jersey",28.0));
    dairy.addAnimal(DairyAnimal("sudha","jersey",30.0));
    dairy.addAnimal(DairyAnimal("kittu","desi",27.0));
    dairy.addAnimal(DairyAnimal("anand","desi",25.0));
    dairy.addAnimal(DairyAnimal("balu","desi",30.0));


    // Adding fodder
    dairy.addFodder(Fodder("Grass", 100.0));
    dairy.addFodder(Fodder("Silage", 50.0));
    dairy.addFodder(Fodder("Hay", 20.0));
    dairy.addFodder(Fodder("grain", 10.0));
   dairy.addFodder(Fodder("fiber food ", 25.0));
   dairy.addFodder(Fodder("protein pea", 10.0));


    



    // Adding dairy products
    dairy.addProduct(DairyProduct("Milk", 1.5));
    dairy.addProduct(DairyProduct("Cheese", 5.0));
    dairy.addProduct(DairyProduct("Butter", 3.0));
    dairy.addProduct(DairyProduct("Ghee", 6.0));
    dairy.addProduct(DairyProduct("Curd", 2.0));
    dairy.addProduct(DairyProduct("Paneer", 4.0));




    // Setting costs
    dairy.setLaborCost(200.0);
    dairy.setTransportCost(50.0);
    


    // Displaying information
    dairy.displayInfo();

    return 0;
}