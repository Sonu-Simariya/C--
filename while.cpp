#include<iostream>
using namespace std;
//simple while loop using.
/*int main(){
    int n,c=0;
    cin>>n;
    int i=0;
    while(i<=n){
        c=i+c;
        i=i+1;
    }
    cout<<"the sum is "<<c;
}*/




//sum of even and odd=1 number .
/*
int main(){
    int a,c=0;
    cin>>a;
    int i=1;
    while(i<=a){
        if(i%2==0){
            c=c+i;
        }
        i=i+1;
    }
    cout<<"the sum is "<<c<<endl;
}
*/



//Celsius to fahernite convertor
/*
int main(){
    float a,z,c,i;
    cout<<"Enter 1 for C to F\nEnter 2 for F to C "<<endl;
    cin>>i;
    cout<<"Enter value"<<endl;
    cin>>a;
    if(i==1){
        c=(a*9/5)+32;
        cout<<"The temp. is "<<c<<"F"<<endl;
    }
    else if(i==2){
        z=(a-32)*5/9;
        cout<<"the temp. is"<<z<<"'c"<<endl;
    }
}
*/



//value is prime or not
int main(){
    int a,i=2;
    cin>>a;
    while(i<a){
        if(a%i==0){
            cout<<"number is not prime"<<i<<endl;
        }
        else{
            cout<<"prime"<<i<<endl;
        }
        i=i+1;
    }
}