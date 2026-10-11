#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int num=2;
    while(num<n){
        if(n%num==0){
            cout<<"Not Prime for "<<num<<endl;
        }
        else{
            cout<<"prime for "<<num<<endl;
        }
        num=num+1;


    }


}