
#include<iostream>
#include<string.h>
using namespace std;
class CAR
{
    private:
        int noc=7;
        char model[7][30]={"TIAGO","PUNCH","ALTROZ","TIGOR","NEXON","HARRIER","SAFARI"};
        char transmition[7][30]={"AUTO GEAR","MENUAL GEAR","AUTO GEAR","MENUAL GEAR","AUTO GEAR","MENUAL GEAR","AUTO GEAR"};
        char fule[7][10]={"petrol","Diesel","CNG","Electric","petrol","Diesel","CNG"};
        char milech[7][10]={"19.01","20.09","19.6","23.64","17.44","14.6","16.3"};
        char t_c[7][5]={"30","24","45","56","67","34","66"};
        char sitting[7]={'5','5','5','5','5','5','5'};
        char airbag[7][4]={"yes","yes","yes","yes","yes","yes","yes"}; 
        float price[7] = {5.65,6.13,6.65,6.30,8.15,15.50,16.20};
    public:
        void choice()
        {
            cout<<"welcome to TATA motes\n-----------------------------------------------\n";
            while(1)
            {
            int i;
            cout<<"Enter your choice:\n";
            cout<<"1)list of cars\n2)Fuel type\n3)price range";
            cin>>i;
            if(i<0 && i>4)
            break;
            switch (i)
                {
                case 1:
                    modes();
                    break;
                case 2:
                    fuel();
                    break;
                case 3:
                    priceRange();
                    break;
                }
            }
        }
    private:
        void modes()
        {
            cout<<"----------------------------------\n";
            cout<<"LIST IF TATA CARS:\n";
            int i=0;
            for(i=0;i<7;i++)
            {
                cout<<i+1<<") "<<model[i]<<endl;
            }
            cout<<"\n\nchose yoyu car to get detail : ";
            cin>>i;
            if(i<0 && i>8)
            {
                cout<<"out of rande";
                return;
            }
            else
            {
                cout<<"model            : "<<model[i-1]<<"\n";
                cout<<"Fuel             : "<<fule[i-1]<<"\n";
                cout<<"price(lakh)      : "<<price[i-1]<<"\n";
                cout<<"Milege           : "<<milech[i-1]<<"\n";
                cout<<"Transimition     : "<<transmition[i-1]<<"\n";
                cout<<"Tank capacity    : "<<t_c[i-1]<<"\n";
                cout<<"Setting capacity : "<<sitting[i-1]<<"\n";
                cout<<"Air bag          : "<<airbag[i-1]<<"\n";
            }
        }
        void fuel()
        {
            int i=0;
            int j;
                    cout<<"Enter your Fuel type prefrance : \n";
                    cout<<"1)petrol\n2)Diesel\n3)CNG\n4)Electric";
                    cin>>j;
                    switch (j)
                    {
                    case 1:
                         for(i=0;i<8;i++)
                        {
                            
                            if(strcmp(fule[i],"petrol")==0)
                            {
                                cout<<"------------------------------------------\n";
                                cout<<"model            : "<<model[i]<<"\n";
                                cout<<"Fuel             : "<<fule[i]<<"\n";
                                cout<<"price(lakh)      : "<<price[i]<<"\n";
                                cout<<"Milege           : "<<milech[i]<<"\n";
                                cout<<"Transimition     : "<<transmition[i]<<"\n";
                                cout<<"Tank capacity    : "<<t_c[i]<<"\n";
                                cout<<"Setting capacity : "<<sitting[i]<<"\n";
                                cout<<"Air bag          : "<<airbag[i]<<"\n"; 
                            }
                        }
                        break;
                    case 2:
                        for(i=0;i<8;i++)
                        {
                        if(strcmp(fule[i],"Diesel")==0)
                            {
                                cout<<"------------------------------------------\n";
                                cout<<"model            : "<<model[i]<<"\n";
                                cout<<"Fuel             : "<<fule[i]<<"\n";
                                cout<<"price(lakh)      : "<<price[i]<<"\n";
                                cout<<"Milege           : "<<milech[i]<<"\n";
                                cout<<"Transimition     : "<<transmition[i]<<"\n";
                                cout<<"Tank capacity    : "<<t_c[i]<<"\n";
                                cout<<"Setting capacity : "<<sitting[i]<<"\n";
                                cout<<"Air bag          : "<<airbag[i]<<"\n"; 
                            }
                        }
                        break;
                    case 3:
                         for(i=0;i<8;i++)
                        {
                         if(strcmp(fule[i],"CNG")==0)
                            {
                                cout<<"------------------------------------------\n";
                                cout<<"model            : "<<model[i]<<"\n";
                                cout<<"Fuel             : "<<fule[i]<<"\n";
                                cout<<"price(lakh)      : "<<price[i]<<"\n";
                                cout<<"Milege           : "<<milech[i]<<"\n";
                                cout<<"Transimition     : "<<transmition[i]<<"\n";
                                cout<<"Tank capacity    : "<<t_c[i]<<"\n";
                                cout<<"Setting capacity : "<<sitting[i]<<"\n";
                                cout<<"Air bag          : "<<airbag[i]<<"\n"; 
                            }
                        }
                        break;
                    case 4:
                         for(i=0;i<8;i++)
                        {
                            if(strcmp(fule[i],"Electric")==0)
                            {
                                cout<<"------------------------------------------\n";
                                cout<<"model            : "<<model[i]<<"\n";
                                cout<<"Fuel             : "<<fule[i]<<"\n";
                                cout<<"price(lakh)      : "<<price[i]<<"\n";
                                cout<<"Milege           : "<<milech[i]<<"\n";
                                cout<<"Transimition     : "<<transmition[i]<<"\n";
                                cout<<"Tank capacity    : "<<t_c[i]<<"\n";
                                cout<<"Setting capacity : "<<sitting[i]<<"\n";
                                cout<<"Air bag          : "<<airbag[i]<<"\n"; 
                            }
                        }
                    break;
                    default:
                        return;
                    break;
                }            
        }
        void priceRange()
        {
            float j;
            cout<<"Enter maximum price range(in lacks) : ";
            cin>>j;
        
            int i;
                for(i=0;i<8;i++)
                {
                    if(price[i]<=j)
                        {
                            cout<<"------------------------------------------\n";
                            cout<<"model            : "<<model[i]<<"\n";
                            cout<<"Fuel             : "<<fule[i]<<"\n";
                            cout<<"price(lakh)      : "<<price[i]<<"\n";
                            cout<<"Milege           : "<<milech[i]<<"\n";
                            cout<<"Transimition     : "<<transmition[i]<<"\n";
                            cout<<"Tank capacity    : "<<t_c[i]<<"\n";
                            cout<<"Setting capacity : "<<sitting[i]<<"\n";
                            cout<<"Air bag          : "<<airbag
                            
                                [i]<<"\n"; 
                        }
                        if(i==6)
                        {
                            break;
                        }  
                }

}
};
int main()
{
    CAR a;
    a.choice();
    return 0;
}
