#pragma once 
#include <iostream>
class OrderItem
{
private:
    std::string name;
    int price;
    int quantity; 
public:
    OrderItem(std::string name, int price, int quantity);
    ~OrderItem();
    int getPrice();
    int getQuantity();
    std::string getName();
};