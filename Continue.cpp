#include <iostream>
using namespace std;

class Complex
{
    int a, b,c;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " + " << c << "i" << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
    c = 0;
     cout<<"Hello world"<<endl;
}
int main()
{
    Complex c1, c2, c3, c4,c5, c6, c7,c8, c9;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    c4.printNumber();
    c5.printNumber();
    c6.printNumber();
    c7.printNumber();
    c8.printNumber();
    c9.printNumber();
    return 0;
}
