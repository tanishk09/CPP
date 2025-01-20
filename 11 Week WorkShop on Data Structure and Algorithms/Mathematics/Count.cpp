////Counts the digit of the number provided
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the digit:";
    cin>>n;
    int c=0;
    while (n>0){
        n=n/10;
        c=c+1;
    }
    cout<<c;
}
