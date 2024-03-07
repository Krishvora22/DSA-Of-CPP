#include<iostream>
using namespace std;

class BankDeposit{
     int principal;
     int years;
     float interestRate;
     float returnvalue;

     public:
        BankDeposit(){}  ///declaration constructor
        BankDeposit(int p, int y , float r); // r can be a value like0.04
        BankDeposit(int p, int y , int r);

        void show();
;};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal =p;
    years=y;
    interestRate=r;
    returnvalue=principal;

    for(int i=0;i<y;i++){
        returnvalue =returnvalue*(1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principal =p;
    years=y;
    interestRate=float(r)/100;
    returnvalue=principal;

    for(int i=0;i<y;i++){
        returnvalue =returnvalue*(1+interestRate);
    }
}
     
    void BankDeposit :: show(){
        cout<<"principal amount was "<<principal<<" return value after "<<years<<" is "<<returnvalue<<endl;
     }

int main(){
    BankDeposit bd1 ,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the valueof p y and r"<<endl;
    cin>>p>>y>>r;
     bd1=BankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter the valueof p y and R"<<endl;
    cin>>p>>y>>R;
     bd2=BankDeposit(p,y,R);
    bd2.show();
    return 0;
}