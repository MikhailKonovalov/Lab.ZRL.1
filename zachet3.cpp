#include <iostream>

using namespace std;

struct car1{
    int year;
    char name[10];
    double liter;
    double price;
    bool neew; 
};
struct car2 {
    char name[10];
    int year;
    double liter;
    bool neew;
    double price;
};
#pragma pack(push,1)
struct car3 {
    int year;
    char name[10];
    double liter;
    double price;
    bool neew;
};
struct car4 {
    char name[10];
    int year;
    double liter;
    bool neew;
    double price;
};
#pragma pack(pop)



int main() {
    setlocale(LC_ALL, "Russian");
    car1 c1;
    cout << "Первая структура :" << endl
        << &c1.year << endl << &c1.name << endl
        << &c1.liter << endl << &c1.price << endl
        << &c1.neew << endl
        << "сумма размера полей" << endl
        << sizeof(c1.year) + sizeof(c1.name) + sizeof(c1.liter) + sizeof(c1.price) + sizeof(c1.neew)
        << endl << "размер поля cтруктуры : " << sizeof(c1) << endl;
    car2 c2;
    cout << "Вторая структура :" << endl
        << &c2.name << endl << &c2.year << endl
        << &c2.liter << endl << &c2.neew << endl
        << &c2.price << endl
        << "сумма размера полей : " << endl
        << sizeof(c2.name) + sizeof(c2.year) + sizeof(c2.liter) + sizeof(c2.neew) + sizeof(c2.price) 
        << endl << "размер поля cтруктуры : " << sizeof(c2) << endl;
    car3 c3;
    cout << "Третья структура с выравниванием :" << endl
        << &c3.year << endl << &c3.name << endl
        << &c3.liter << endl << &c3.price << endl
        << &c3.neew << endl
        << "сумма размера полей" << endl
        << sizeof(c3.year) + sizeof(c3.name) + sizeof(c3.liter) + sizeof(c3.price) + sizeof(c3.neew)
        << endl <<"размер поля cтруктуры : " << sizeof(c3) << endl;
    car4 c4;
    cout << "Четвертая структура с выравниванием :" << endl
        << &c4.name << endl << &c4.year << endl
        << &c4.liter << endl << &c4.neew << endl
        << &c4.price << endl
        << "сумма размера полей" << endl
        << sizeof(c4.name) + sizeof(c4.year) + sizeof(c4.liter) + sizeof(c4.neew) + sizeof(c4.price)
        << endl <<"размер поля cтруктуры : " << sizeof(c4) << endl;
}
