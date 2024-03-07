#include<iostream>
using namespace std;

void printarry(int arr[] , int size){
    cout<<"Printing the array"<<endl;
      for(int i=0;i<=size;i++){
        cout<<arr[i]<<" "<<endl;
      }
      cout<<"Printing Done"<<endl;
}

int main(){
    int third[5]={3,6,1,3};
    printarry(third,12);

    int thirdsize=sizeof(third)/sizeof(int);
    cout<<thirdsize;
}

