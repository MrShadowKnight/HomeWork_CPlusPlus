#include <iostream>
#include "Number.h"
#include "Integer.h"
#include "Real.h"

using namespace std;

int main()
{
    Number* num1 = new Integer(5);
    Number* num2 = new Real(2.5);

    Number* sum = num1->add(*num2);
    Number* difference = num1->subtract(*num2);
    Number* product = num1->multiply(*num2);
    Number* quotient = num1->divide(*num2);

    cout << "Sum: ";
    sum->display();
    cout << endl;

    cout << "Difference: ";
    difference->display();
    cout << endl;

    cout << "Product: ";
    product->display();
    cout << endl;

    cout << "Quotient: ";
    if (quotient != nullptr) {
        quotient->display();
    }
    cout << endl;

    delete num1;
    delete num2;
    delete sum;
    delete difference;
    delete product;
    delete quotient;

    return 0;
}
