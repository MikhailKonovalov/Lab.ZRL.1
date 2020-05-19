#include <iostream>

using namespace std;

void prntArr(int* array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        cout << &array[i] << endl; 
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 4;
    int staticArr[size];
    const int lines = 2;
    const int collums = 2;
    int staticArr2[lines][collums];
    //объявление динамических массивов
    int* dynamicArr = new int[size];
    int** dynamicArr2 = new int* [lines];
    for (size_t i = 0; i < lines; i++) {
        dynamicArr2[i] = new int[collums];
    }
    cout << "Адрес одномерного статического массива: " << endl;
    prntArr(staticArr, size);
    cout << "Адрес двумерного статического массива: " << endl;
    for (size_t i = 0; i < lines; ++i) {
        for (size_t j = 0; j < collums; ++j) {
            cout << &staticArr2[i][j] << endl;
        }
    }
    cout << "Адрес одномерного динамического массива: " << endl;
    prntArr(dynamicArr, size);
    cout << "Адрес двумерного динамического массива: " << endl;
    for (size_t i = 0; i < lines; ++i) {
        for (size_t j = 0; j < collums; ++j) {
            cout << &dynamicArr2[i][j] << endl;
        }
    }
    for (size_t i = 0; i < lines; ++i) {
        delete dynamicArr2[i];
    }
    delete[]dynamicArr2;
    return 0;
}
