/*!
    @file mycomplex.h
    @brief  Класс
*/

#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;

/*!
    @brief класс комплексного числа

    Прототип объекта со своими переменными, конструкторами,
    открытими, закрытимы методами.

*/
class Complex {

    friend Complex operator + ( const double &, const Complex & );
    friend Complex operator - ( const double &, const Complex & );
    friend Complex operator * ( const double &, const Complex & );

    friend istream & operator >> ( istream &, Complex & );
    friend ostream & operator << ( ostream &, Complex & );
    /*!
        @brief Действительная составляющая
    */
    double Re;

    /*!
        @brief Мнимая составляющая
    */
	double Im;

	public:
	    void Set ( double aRe, double aIm = 0 );
        Complex ( double aRe = 0, double aIm = 0 );
        Complex ( const Complex & );

        Complex operator * ( const Complex & );
        Complex operator + ( const Complex & );
        Complex operator - ( const Complex & );
        Complex operator + ( const double & );
        Complex operator - ( const double & );
        Complex operator * ( const double & );
        Complex operator / ( const double & );

        Complex & operator += ( const Complex & );
        Complex & operator -= ( const Complex & );
        Complex & operator *= ( const Complex & );
        Complex & operator =  ( const Complex & );
        Complex & operator += ( const double & );
        Complex & operator -= ( const double & );
        Complex & operator *= ( const double & );
        Complex & operator /= ( const double & );
        Complex & operator =  ( const double & );

        operator double ();
        double abs ();

        ~ Complex ();

};
#endif
