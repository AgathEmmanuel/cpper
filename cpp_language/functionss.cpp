#include <iostream>
using std::cout;

int adder(int x, int y)
{
    return x+y;
}

// overloading

double adder(double x,double y, double z)
{
    return x+y+z;
}

int main()
{
    int ix=22.6;
    int iy=33;
    int iz=332.2;
    double x=22.6;
    double y=33;
    double z=332.2;
    double sum=adder(x,y,z);
    cout << "the sum of "<< x << "," << y << " and " << z << " is " << sum << '\n';
    return 0;
}