#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // creating a consructor
    complex(void);
      // consructor declaration
    void printNumber(){
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
    };

complex::complex(void){
    a=10;
    b=0;
}

int main(){
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
/*properties of constructors

1. It should be delcared in the public section of yhe class
2. They are automatically invoked whenever the object is created.
3.They cannot return values and do not have return types
4.It can have default arguments
5.We cannot refer to their address

*/