#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    

    cout << "тип данных\t\t| мин значение\t\t| макс значение\t\t| кол-во байт\t| описание" << endl;
    cout << "short" << "\t\t\t";
    cout << "| " << SHRT_MIN<<"\t\t";
    cout << "| " << SHRT_MAX<<"\t\t\t";
    cout << "| " << sizeof(short) << "\t\t";
    cout << "| " << "целые числа" << endl;

    cout << "int" << "\t\t\t";
    cout << "| " << INT32_MIN << "\t\t";
    cout << "| " << INT32_MAX << "\t\t";
    cout << "| " << sizeof(int) << "\t\t";
    cout << "| " << "целые числа" << endl;

    cout << "long long" << "\t\t";
    cout << "| " << LLONG_MIN << "\t";
    cout << "| " << LLONG_MAX << "\t";
    cout << "| " << sizeof(long long) << "\t\t";
    cout << "| " << "целые числа" << endl;

    cout << "float" << "\t\t\t";
    cout << "| " << FLT_MIN << "\t\t";
    cout << "| " << FLT_MAX << "\t\t";
    cout << "| " << sizeof(float) << "\t\t";
    cout << "| " << "вещественные числа" << endl;

    cout << "double" << "\t\t\t";
    cout << "| " << DBL_MIN << "\t\t";
    cout << "| " << DBL_MAX << "\t\t";
    cout << "| " << sizeof(double) << "\t\t";
    cout << "| " << "вещественные числа" << endl;

    cout << "char" << "\t\t\t";
    cout << "| " << CHAR_MIN << "\t\t\t";
    cout << "| " << CHAR_MAX << "\t\t\t";
    cout << "| " << sizeof(char) << "\t\t";
    cout << "| " << "символьный" << endl;

    cout << "bool" << "\t\t\t";
    cout << "| " << 0 << "\t\t\t";
    cout << "| " << 1 << "\t\t\t";
    cout << "| " << sizeof(bool) << "\t\t";
    cout << "| " << "логический" << endl;



    
}
