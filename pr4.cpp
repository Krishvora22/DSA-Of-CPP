#include<iostream>
using namespace std;
     #define t 3.14

class area{
    private :
    int H,W,D,a2,a3;
    float a1;
    float R;

    public:

    void Circle(){
        cout<<"Enter the radius of a circle";
        cin>>R;
         a1=t*R*R;
    }

    void output1(){
        cout<<"Enter the area of a circle"<<endl;

         cout<<a1<<endl;
    }

    void rectangular(){
        cout<<"Enter the hight of a rectangular"<<endl;
        cin>>H;
        cout<<"Enter the width of a rectangular"<<endl;
        cin>>W;   
        a2=H*W;     
    }

    void output2(){
           cout<<"Enter the area of a rectangular"<<endl;
         cout<<a2<<endl;
    }

        void cuboid(){
        cout<<"Enter the hight of a cuboid"<<endl;
        cin>>H;
        cout<<"Enter the width of a cuboid"<<endl;
        cin>>W;
        cout<<"Enter the depth of a cuboid"<<endl;
        cin>>D;
        a3=H*W*D;     
    }

    void output3(){
           cout<<"Enter the area of a Cuboid"<<endl;
         cout<<a3<<endl;
    }


};
int main()
{
area k;
k.Circle();
k.output1();
k.rectangular();
k.output2();
k.cuboid();
k.output3();
}