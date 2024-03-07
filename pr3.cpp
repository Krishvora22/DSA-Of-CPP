#include <iostream>
using namespace std;
  class s1{
    private :
    char cars[7][30]={"tiago", "punch","altroz","tigor","nexon","harrier","safari"};
    char fuel[7][30]={"diesel","petrol","CNG","electric","CNG","diesel","CNG"};
    int price[7]={3,4,5,6,7,8,9};
    char Mil[7][20]={"23","45","97","54","32","11","34"};
    char transmition[7][30]={"manual","AMT","manual","AMT","AMT","manual","AMT"};
    char SC[7][20]={"4","5","5","3","3","2","1"};
    char TC[7][20]={"44","45","56","43","21","23","23"};
    char Airbag[7][20]={"yes","no","yes","yes","yes","yes","yes"};
   int option;


    public :

    void model(){
        cout<<"list of cars ";
        int i;
            for(int i=0;i<7;i++)
            {
                cout<<i+1<<") "<<cars[i]<<endl;
            }
            cout<<"\n\nchose yoyu car to get detail : ";
            cin>>i;
            cout<<"model   "<<"Fuel   "<<"Price   "<<"Mileage   "<<"Transmission  "<<"Tc   "<<"Sc    "<<"Airbag"<<endl;
            cout<<cars[i-1]<<"   "<<fuel[i-1]<<"   "<<price[i-1]<<"       "<<Mil[i-1]<<"         "<<transmition[i-1]<<"         "<<SC[i-1]<<"  "<<TC[i]<<"  "<<Airbag[i-1];
    }

    void fueltype(){
        cout<<"Tata motors are avaliable with fuel options ";
        cout<<"1.petrol  "<<"2.Diesel  "<<"3.CNG  "<<"4.Electric  ";
        int k;
        cout<<"Enter your fuel prefernce";
        cin>>k;

        switch(k){
            case 1:
            cout<<"model   "<<"Fuel   "<<"Price   "<<"Mileage   "<<"Transmission  "<<"Tc  "<<"Sc   ";
            cout<<cars[1] <<"  "<<fuel[1]<<"  "<<price[1]<< "  " <<Mil[1]<<"  "  <<transmition[1]<<"  "  <<SC[1]<<"  " <<TC[1]<<"  "<<Airbag[1];
             break;

            case 2:
            cout<<"model     "<<"Fuel      "<<"Price     "<<"Mileage"<<"Transmission  "<<"Tc  "<<"Sc  ";
             cout<<cars[0]<<fuel[0]<<price[0]<<Mil[0]<<transmition[0]<<SC[0]<<TC[0]<<Airbag[0]<<endl;
             cout<<cars[5] <<"  "<<fuel[5]<<"  "<<price[5]<< "  " <<Mil[5]<<"  "  <<transmition[5]<<"  "  <<SC[5]<<"  " <<TC[5]<<"  "<<Airbag[5];
             break;

            case 3:
            cout<<"model"<<"Fuel"<<"Price"<<"Mileage"<<"Transmission"<<"Tc"<<"Sc";
            cout<<cars[2] <<"  "<<fuel[2]<<"  "<<price[2]<< "  " <<Mil[2]<<"  "  <<transmition[2]<<"  "  <<SC[2]<<"  " <<TC[2]<<"  "<<Airbag[2]<<endl;
            cout<<cars[4] <<"  "<<fuel[4]<<"  "<<price[4]<< "  " <<Mil[4]<<"  "  <<transmition[4]<<"  "  <<SC[4]<<"  " <<TC[4]<<"  "<<Airbag[4]<<endl;
            cout<<cars[6] <<"  "<<fuel[6]<<"  "<<price[6]<< "  " <<Mil[6]<<"  "  <<transmition[6]<<"  "  <<SC[6]<<"  " <<TC[6]<<"  "<<Airbag[6]<<endl;
            break;

            case 4:
            cout<<"model"<<"Fuel"<<"Price"<<"Mileage"<<"Transmission"<<"Tc"<<"Sc";
            cout<<cars[4]<<fuel[4]<<price[4]<<Mil[4]<<transmition[4]<<SC[4]<<TC[4]<<Airbag[4];
            break;
        }
    }

    void pricetype(){
        int n;
            cout<<"enter your max. affordable range in lakhs";
            cin>>n;
                for(int i=0;i<7;i++){
                if (price[i]<=n){
                cout<<"model  "<<"Fuel  "<<"Price  "<<"Mileage  "<<"Transmission"<<"Tc  "<<"Sc  ";
                cout<<cars[i] <<"  "<<fuel[i]<<"  "<<price[i]<< "  " <<Mil[i]<<"  "  <<transmition[i]<<"  "  <<SC[i]<<"  " <<TC[i]<<"  "<<Airbag[i]<<endl;
                }
                }
    }

    void choice(){
       cout<<"enter your option";
       cin>>option;
            switch (option) {
               case 1:
                  model();
                    break;

                case 2:
                   fueltype();
                      break;

                 case 3:
                   pricetype();    
                     break;
             }
             }

  };

int main(){
    cout<<"Welcome to tata motars"<<endl;
    cout<<"get the cars detail as per your reference"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"1.modeal name"<<endl;
    cout<<"2.Fuel type"<<endl;
    cout<<"3.price range"<<endl;

    s1 a;
    a.choice();
    
}