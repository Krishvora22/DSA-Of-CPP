#include <iostream>
#include <string.h>
using namespace std;

class Y;
class X{
    int data;

public:
    void setvalue(int value) {
        data = value;
    }

    friend void add(X, Y);
};

class Y{
    int num;

public:
    void setvalue(int value){
        num = value;
    }

    friend void add(X,Y);
};

void add(X o1, Y o2){
    cout << "summing datas of X and Y obects gives me" << o1.data + o2.num;
}
int main()
{
    X a1;
    a1.setvalue(3);

    Y b1;
    b1.setvalue(5);

    add(a1,b1)
    return 0;
}