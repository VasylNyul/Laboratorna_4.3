// Lab_03_2.cpp
// Нюл Василь
// Лабораторна робота No 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 7

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, xp, xk, dx, x, F;
   
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout<<"a=";cin >>a;
    cout<<"b=";cin >>b;
    cout<<"c=";cin >>c;
    cout<<"x=";cin >>x;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
         << setw(7) << "F" << " |" << endl;
    cout << "---------------------------" << endl;
    
    x = xp;
    while (x <= xk)
    {
        if(x<5 && c!=0)
            F = -a*x*x-b;
         else
             if(x>5 && c==0)
                F = (x-a)/x;
             else
                 F = -x/c;
        
        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << F
             << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    
    return 0;
    
}
