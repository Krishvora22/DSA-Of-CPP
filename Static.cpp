#include <iostream>
#include <string.h>
using namespace std;

class employee
{
  int id;
  static int count;

public:
  void setdata(void)
  {
    cout << "enter the id" << endl;
    cin >> id;
    count++;
  }
  void getdata(void)
  {
    cout << "the id of this employee is " << id << "  and this is employee number" << count << endl;
  }
  static void getcount(void){
    // cout<<id; // throws an error
    cout<<"the value of count is "<<count<<endl;
  }
};

int employee ::count=1000; // default value is 0
    // count is the static data member of class employee
int main()
{
  employee krish, raj, prince;
  krish.setdata();
  krish.getdata();
  employee::getcount();


  raj.setdata();
  raj.getdata();
  employee::getcount();
  prince.setdata();
  prince.getdata();
    employee::getcount();
  return 0;
}