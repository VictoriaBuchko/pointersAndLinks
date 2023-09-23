#include <iostream>
using namespace std;

int main()
{

    cout << "Task 1---------------------------------------------------------\n\n";
    //1) Используя только указатели и оператор разыменования, определить знак числа, введённого с клавиатуры. 

    int x = -10;
    int* px = &x;
 

    if (*px > 0)
    {
        cout << "positive\n";
    }
    else if (*px == 0)
    {
        cout << "zero\n";
    }
    else {
        cout << "negative\n";
    }

    cout << "\nTask 2---------------------------------------------------------\n\n";
    //2) Написать примитивный калькулятор, пользуясь только указателями и оператором разыменования.

    int y = 10;
    int z = 5;

    int* py = &y;
    int* pz = &z;

    char op;

    cout << "+, -, *, /: ";
    cin >> op;

    cout << endl;

    char* pop = &op;

    if (*pop == '+') {
        cout<< *py + *pz;
    }
    else if (*pop == '-') {
        cout<< *py - *pz;
    }
    else if (*pop == '*') {
        cout<< *py * *pz;
    }
    else if (*pop == '/') {


        if (*pz != 0) {

             cout<< *py / *pz;
        }
        else {
            cout << "error\n";
        }
    }
    else {
        cout << "error\n";
    }

    cout << "\nTask 3---------------------------------------------------------\n\n";
    //3) Используя только указатели и оператор разыменования, обменять местами значения двух переменных.

    int d = 4;
    int e = 5;

    int* pd = &d;
    int* pe = &e;
    cout << "d = " << *pd << ", e = " << *pe << endl;

    *pd += *pe;
    *pe = *pd - *pe;
    *pd -= *pe;

    cout << "d = " << *pd << ", e = " << *pe << endl;


    return 0;
}

