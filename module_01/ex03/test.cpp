
#include <iostream>
using namespace std;
 
class A {
    int& p;
 
    // Note:basically it is
    // supposed to be an error
    // because this reference
    // member p is not initialized
    // with some variable at the same
    // step of its declaration. But it
    // will run in this case. For us,
    // this is the declaration but
    // not for compiler
 
public:
 
    // this line
    // means int &p=w, so p and w
    // both are same. Compiler considers
    // this step as declaration and
    // initialization is done at
    // same step.
    A(int w): p(w)
    {
        cout << p;
    }
};
int main()
{
    A obj(10);
    return 0;
}