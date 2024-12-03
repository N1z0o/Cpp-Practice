#include <iostream>

using namespace std;
int main()
{
    int Num1{0}, Num2{0}, Num3{0};
    cout <<"Enter 3 digits seperated by spaces: ";
    cin >> Num1>> Num2>> Num3;
    const int count {3};
    int Sum;
    Sum = Num1+Num2+Num3;
    double avg {0.00};
    avg = static_cast <double> (Sum)/count;
    cout <<"The Sum is: " << Sum << endl;
    cout <<"The average is: " << avg << endl;
    return 0;
}