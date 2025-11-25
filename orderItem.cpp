#include "orderItem.h"

OrderItem::OrderItem(std::string name, int price, int quantity){
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}

OrderItem::~OrderItem() {}

std::string OrderItem::getName(){
    return this->name;
}

int OrderItem::getPrice(){
    return this->price;
}

int OrderItem::getQuantity() {
    return this->quantity;
}