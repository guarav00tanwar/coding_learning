//Write a C++ program that displays the memory space required by each fundamental type on screen.
#include <iostream>
using namespace std;

int main()
{
    cout << "Memory space required by each fundamental type:" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    return 0;
}