#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout << vector1.at(0) <<"  &  " << vector1.at(1);
    cout <<"\nThe size of Vector 1 is: "<<vector1.size();
    cout <<endl <<endl;
    cout <<"-------------------------------------------------" <<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(0) <<" & " << vector2.at(1);
    cout <<"\nThe size of Vector 2 is: "<<vector2.size();
    cout <<endl <<endl;
    cout <<"-------------------------------------------------" <<endl;
    cout <<endl;
    vector <vector <int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << vector_2d.at(0).at(0) <<"  &  " << vector_2d.at(0).at(1);
    cout << endl << vector_2d.at(1).at(0) <<" & " << vector_2d.at(1).at(1);
    vector1.at(0) = 1000;
    cout <<endl;
    cout <<"-------------------------------------------------" <<endl;
    cout <<endl;
    cout << vector_2d.at(0).at(0) <<"  &  " << vector_2d.at(0).at(1);
    cout << endl << vector_2d.at(1).at(0) <<" & " << vector_2d.at(1).at(1);
    cout <<endl;
    cout <<"-------------------------------------------------" <<endl;
    cout <<endl;
    cout << vector1.at(0) <<"  &  " << vector1.at(1)<<endl;
    return 0;
}