#include <iostream>
#include <string.h>
using namespace std;

class shop
{
  int itemId[100];
  int itemprice[100];
  int counter;

public:
  void initcounter(void)
  {
    counter = 0;
  }
  void setprice(void);
  void displayprice(void);
};

void shop ::setprice(void)
{
  cout << "enter id your item " << counter + 1 << endl;
  cin >> itemId[counter];
  cout << "enter price of your item" << endl;
  cin >> itemprice[counter];
  counter++;
}

void shop::displayprice(void)
{
  for (int i = 0; i < counter; i++)
  {
    cout << "the price of item with id  " << itemId[i] << "is " << itemprice[i] << endl;
  }
}
int main()
{
  shop dukaan;
  dukaan.initcounter();
  dukaan.setprice();
  dukaan.setprice();
  dukaan.setprice();
  dukaan.displayprice();

  return 0;
}