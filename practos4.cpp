#include <iostream>
#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Rus");

    const int rows = 3, columns = 5;
    double ar[rows][columns];

    cout << "=========================================" << endl;
    cout << "\tВВОД ЭЛЕМЕНТИКОВ МАССИВА" << endl;
    cout << "=========================================" << endl;
    cout << "(вводите элементы строки через !пробел!" << endl;
    for (int i = 0; i < rows; i++) 
    {
        cout << "Строчка номер " << i + 1 << ": ";
        for (int j = 0; j < columns; j++) 
        {
            cin >> ar[i][j];
        }
    } // здеся у нас происходит ввод массива с клавиатуры
    cout << "=========================================" << endl;
    cout << "Среднее арифметическое значение элементов по строкам:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        double sum = 0;
        for (int j = 0; j < columns; j++) 
        {
            sum += ar[i][j];
        }
        double average = sum / columns;
        cout << "Строка " << i + 1 << ": " << average << endl;
    }// а здеся у нас происходит вычисление среднего арифметического
    return 0;
}