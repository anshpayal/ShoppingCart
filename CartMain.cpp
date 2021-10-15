/*
1. Create vector to store all the products.
2. Take input from user to select option(add item, view cart, checkout )
3. If user select the option add item
    -> Show all the availabe products
    -> Select the products.
    -> Add to cart.
*/

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

Product* chooseProduct(){
    string productList;
    cout<<"Available Products"<<endl;
    for(auto product: allProducts){
        productList.append(product.displayProduct());
    }
    cout<<productList<<endl;
    cout<<"---------------------------"<<endl;
    string choice;
    cin>>choice;
    for(int i=0; i<allProducts.size(); i++){
        if(allProducts[i].getShortName()==choice){
            return &allProducts[i];
        }
    }
    cout<<"Product NOT FOUND"<<endl;
    return NULL;
}

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
            //TODO:
            //Add to cart
            //View all products + Choose the product + Add to cart
            Product *product=chooseProduct();
            if(product!=NULL){
                cout<<product->displayProduct()<<"Added to cart "<<endl;
            }
        }
        else if(action=='v'){
            //View the cart
        }
        else{
            //Checkout
        }
    }
}