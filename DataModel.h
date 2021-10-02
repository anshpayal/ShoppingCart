//Product, Item, Cart
#include<iostream>
#include<string>
using namespace std;

class Item;   //forward decalartion
class Cart;
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
        return name+" : Rs " + to_string(price) + "\n";
    }
    friend class Item;
};

class Item{
    Product product;
    int quantity;
public:
    Item(Product p, int q):product(p), quantity(q){}
    int ItemPrice(){
        return quantity*product.price;
    }
    string itemInfo(){
        return to_string(quantity) + " x " + product.name +" Rs: " + to_string(quantity*product.price);
    }
};

class Cart{

};
