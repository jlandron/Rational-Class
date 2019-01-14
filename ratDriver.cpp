/**@auther Joshua Landron
 * CSS342 Algorithms and Data Structures
 * edited from "Objects and Classes Lecture by Professor Munehiro Fukuda"
 */
#include <iostream>
#include "rat2.h"

using namespace std;

int main(){
    Rational x(-2,6), y(-14,-16), z;

    cout << x << " + " << y;
    z = x + y;
    cout << " = " << z << endl;

    cout << x << " - " << y;
    z = x - y;
    cout << " = " << z << endl;

    cout << x << " * " << y;
    z = x * y;
    cout << " = " << z << endl;

    cout << x << " * " << y;
    z = x - y;
    cout << " * " << z << endl;

    Rational a;
    cin >> a;

    cout << "Your Rational was " << a << endl;

    return 0;
}