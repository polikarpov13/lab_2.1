#include <iostream>
#include "Line.h"

using namespace std;

int main()
{
    Line l(1, 13);

    cout << l++ << endl;
    cout << l << endl;
    cout << ++l << endl;
    cout << l << endl;

    Line l1;

    cout << "Enter first and second : ";
    cin >> l1;

    int x;

    cout << "Enter x : " << endl;
    cin >> x;

    int result = l1.getFirst() * x + l1.getSecond();
    cout << "Result : " << result << endl;
}
