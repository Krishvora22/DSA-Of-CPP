#include <iostream>
#include <string.h>
using namespace std;
class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
       
       // Below line means that non member-sumcomplex function is allowed to do anything with my private parts(members)
    friend complex sumcomplex(complex o1, complex o2);
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.printNumber();

    c2.setnumber(5, 8);
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();
}

/* properties pf friend functions
1. not in the scope of class
2.since it is not in the scope of tge class, it cannot be called from the object of 
 that class. c1.sumcomplex() == Invalid
 3.Can be invoked with out the help of my object.
 4. usually contans the objects as argumnets.
 5. Can be declared inside public or private section of the class. 
 6.It cannot access the members directly by thein names and need object_name.member_name 
    to access any member.
*/

/*
1+2i
5+8i
------
6+10i
*/