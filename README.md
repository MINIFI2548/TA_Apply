## Description
ให้ class ชื่อ orderItem ชื่อจะบอกรายละเอียดของ order ซึ่งจะเป็น vertor\<orderItem\> โดยภายใน orderItem จะบอกข้อมูลดังนี้ price(ราคา) quantity(จำนวน) ให้คิดราคารวมทั้งหมดของ order นั้นโดยมีเงื่อนไขว่าถ้า price หรือ quantity เป็นค่า 0 หรือ น้อยกว่าไม่ต้องคิด orderItem นั้น
```c++
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
```

- Input(s): `std::vector<OrderItem> order`
- Output: `int`
- Function:
```c++
int calculatePrice (std::vector<OrderItem> order);
``` 