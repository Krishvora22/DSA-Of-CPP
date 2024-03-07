#include<iostream>
#define pi 3.148
using namespace std;
class area
{
private:
    int radius;
    static int x;
public:
    area();
    area(int);
    area(area&);
    ~area();
};
int area::x;
area::area()
{
    radius=1;
    cout<<"circle with radius "<<radius<<" has area "<<radius*radius*pi<<endl;
    x++;
}
area::area(int r)
{
    radius=r;
    cout<<"circle with radius "<<radius<<" has area "<<radius*radius*pi<<endl;
    x++;
}

area::area(area &n){
    radius=n.radius;
    cout<<"circle with radius "<<radius<<" has area "<<radius*radius*pi<<endl;
    x++;
}

area::~area(){
    cout<<"one object is deleted"<<endl;
    cout<<"total active objects are "<<--x<<endl;
}
int main()
{
    area a1;
    area a2(20);
    area a3;
    return 0;
}
