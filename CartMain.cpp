#include<iostream>
#include<string>
#include "DataModel.h"
using namespace std;

int main(){
    Product p1(001,"Apple",26);
    cout<<p1.displayProductName();
}