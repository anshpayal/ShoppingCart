#include<iostream>
#include<vector>
#include<string>
#include "DataModel.h"
using namespace std;

vector<Product>allProducts={   //this are the products which are availabe.
    Product(001,"apple",16),
    Product(002,"mango",25),
    Product(003,"guava",36),
    Product(004,"banana",12),
    Product(005,"strawberry",52),
    Product(006,"pineapple",44),
};

int main(){
    // Product p1(001,"Apple",26);    //testing the product class 
    // cout<<p1.displayProduct();
    // Item fruit(p1,3);            //testing the Item class
    // cout<<fruit.itemInfo();

    char action;
    while(true){
        cout<<"Select an action - (a)dd item, (v)iew cart, (c)heckout"<<endl;
        cin>>action;
        if(action=='a'){
            //Add to cart
            //View all products + Choose the product + Add to cart
        }
        else if(action=='v'){
            //View the cart
        }
        else{
            //Checkout
        }
    }
}