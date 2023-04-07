#include <iostream>
 using namespace std;
int main() {
    int num, num2;
    cout<<"enter the number of num\n";
    cin>>num;
    cout<<"enter the number of num2\n";
    cin>>num2;
    cout<<"the sum is\n" << num + num2;

return 0;
}

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

// #include<iostream>
// using namespace std;


// class Complex
// {
//     int a, b;

// public:
//     Complex(int, int); // Constructor declaration

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
// {
//     a = x;
//     b = y;
//     // cout<<"Hello world";
// }
// int main(){
//     // Implicit call
//     Complex a(4, 6);
//     a.printNumber();

//     // Explicit call
//     Complex b = Complex(5, 7);
//     b.printNumber();

//     return 0;
// }
#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};
int main(){
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){
        a = 0;
        b =0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;  
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem [size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++; 
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    return 0;
}
#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0; 
}

#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}



