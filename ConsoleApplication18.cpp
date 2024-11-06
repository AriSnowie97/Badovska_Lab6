#include <iostream>
using namespace std;
int main()
{
    double a = 10.0, b = 8.0, c = 15.0;
    double* num1 = &a;
    double* num2 = &b;
    double* num3 = &c;
    double seredne = (*num1 + *num2 + *num3) / 3;
    cout << "Middle number: " << seredne << endl;
    return 0;
}
