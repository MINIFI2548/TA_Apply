#include <vector>
#include "orderItem.cpp"

std::vector<OrderItem> order = {OrderItem("A", 25, 1), OrderItem("B", 15, -5), OrderItem("C", 20, 3), OrderItem("D", 30, 2), OrderItem("E", 5, -1)};

int calculatePrice (std::vector<OrderItem> order){
    int amount = 0;
    int orderSize = order.size();
    for(int i=0; i < orderSize; i++){ 
        int price = order[i].getPrice();
        int quantity = order[i].getQuantity();
        price = price > 0 ? price : 0;
        quantity = quantity > 0 ? quantity : 0;
        amount += price * quantity;
    }
    return amount;
}

int main(){
    std::cout << calculatePrice(order);
    return 0;
}