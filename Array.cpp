#include <iostream>
#include <string.h>
using namespace std;

class employee{
    int id;
    int salary;

    public:
    void setid(void){
        salary=122;
        cout<<"Enter the id of employee";
        cin>>id;
    }
    void getid(void){
        cout<<"The id of this employee is "<<id<<endl;
    }
};
int main(){

employee krish;
krish.setid();
krish.getid();

  
   employee google[4];
   for (int i = 0; i < 4; i++)
   {
       google[i].setid();
       google[i].getid();
   }
   return 0;
   }
   
  