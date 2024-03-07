#include <iostream>
using namespace std;

class complex{
    int a,b;

    public :
    complex(int,int);        // consructor declaration

    void printnumber(){
   cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

complex::complex(int x,int y){ // ---> This is a parameterized constructor as it takes 2 parameters
    a=x;
    b=y;
}

int main(){
    complex a(4,6);
    complex b(5,7);
    a.printnumber();
    b.printnumber();

}
