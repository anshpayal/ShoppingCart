//Product, Item, Cart
#include<iostream>
#include<string>
using namespace std;

class Product{
    int id;
    string name;
    int price;
public:
    Product(int uniqueID, string name, int price){
        id=uniqueID;
        this->name=name;
        this->price=price;
    }
    string displayProduct(){
        return name+" : Rs " + to_string(price);
    }
};

class Item{

};

class Cart{

};
