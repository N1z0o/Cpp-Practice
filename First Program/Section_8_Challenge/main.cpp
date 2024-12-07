#include <iostream>
using namespace std;
int main()
{
    int dollars_in, dollars_out, quarter, dime, nickel, penny;
    cout << "Enter an amount in cents: ";
    cin >> dollars_in;
    dollars_out = dollars_in/100;
    quarter = (dollars_in - 100*dollars_out)/25;
    dime = (dollars_in - 100*dollars_out - 25*quarter)/10;
    nickel = (dollars_in - 100*dollars_out - 25*quarter - 10*dime)/5;
    penny = (dollars_in - 100*dollars_out - 25*quarter - 10*dime - 5*nickel);
    
    cout << "--Following change can be provided-- " << endl <<"Dollars:  " << dollars_out << endl <<"Quarters: " << quarter << endl;
    cout <<"Dimes:    " << dime << endl <<"Nickels:  " << nickel << endl <<"Pennies:  " << penny << endl;
    
    return 0;
}