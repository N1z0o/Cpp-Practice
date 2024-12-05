#include <iostream>

using namespace std;
int main()
{
    bool equal {false};
    bool Notequal {false};
    
    int num1, num2;
    
//    cout << boolalpha;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    equal = (num1 == num2);
    Notequal = (num1 != num2);
    cout << "Comparison results (equal): "<< equal << endl;
    cout << "Comparison results (Not equal): "<< Notequal << endl;
    return 0;
}