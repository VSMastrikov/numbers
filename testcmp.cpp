/*!
    @file testcmp.cpp
    @brief Функции main

     тестирует комплексное число
*/

#include <iostream>
#include "mycomplex.h"

using namespace std;

/*!
    @brief Основная функция main
    @return  ноль
*/
int main () {
//тестирование класса комплексных чисел
/*!
    @brief Комплексное число
*/
    Complex A, B ( -4 ), C ( 23.0, 45.9 );

/*!
    @brief Комплексное число
*/
    Complex M = B - C;

/*!
    @brief Комплексное число
*/
    Complex D;

    A = B + C;

    cout << A << ", " << B << ", " << C << endl;
    cout <<"A = B + C, A = "<< A << endl;
    cout << "M = B - C, M = " << M << endl;
    cout << "M * A = " << M * A << endl;
    cout << "M / 4.45 = " << M / 4.45 << endl;
  	cout << "Enter complex number D = ";

  	cin >> D;

    A += C + D;

    cout << "D = " << D << "\nA = " << A << endl;

    return 0;
}
