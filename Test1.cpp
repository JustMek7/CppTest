#include <iostream>
using namespace std;
int main (){

    double r, v; //double คือประเภทเดียวกับ float แต่ทศนิยมจะกว้างกว่า
    const double PI = 3.141592653589793; 
    cin >> r;
   v = (4.0/3.0) * PI * r * r * r; //เขียนตามสูตรที่ให้มาเลยย
   cout << v << endl;

    return 0;
}