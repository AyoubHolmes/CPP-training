#include <iostream>
using namespace std;
  
// Base class declaration
class Base {
    void print()
    {
        cout << "Base" << endl;
    }
};
  
// Derived Class 1 declaration
class Derived1 : public Base {
    void print()
    {
        cout << "Derived1" << endl;
    }
};
  
// Derived class 2 declaration
class Derived2 : public Base {
    void print()
    {
        cout << "Derived2" << endl;
    }
};
  
// Driver Code
int main()
{
    // Derived1 d1;
  
    // Base class pointer hold Derived1
    // class object
    // Base* bp = dynamic_cast<Base*>(&d1);
  
    // Dynamic casting
    // Derived2* dp2 = dynamic_cast<Base*>(bp);
    // if (dynamic_cast<Derived1*>(&d1) == nullptr)
    //     cout << "null" << endl;
    int x = 10;
    // float *y = dynamic_cast<float *>(&x);
    return 0;
}
