#include <iostream>

using namespace std;

int global;

int main(){
    setlocale(LC_ALL,"Russian");
    int automat;
    int* dynamic = new int;
    cout << "Глобальная переменная, её адрес: " << &global << endl;
    cout << "Автоматическая перменная, её адрес: " << &automat << endl;
    cout << "Динамическая переменная, её адрес: " << dynamic << endl;
    delete dynamic;
    return 0;
}



