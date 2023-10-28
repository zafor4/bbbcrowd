#include<iostream>
using namespace std;
int main(){
            int i=1;
    while (1){
        int road,num;
        cin>>road>>num;
        if (road==0 &&num==0){
            break;
        }
        if (road>0){
        if (road==num){
            cout<<"Case "<<i<<": "<<"0"<<endl;
        }
        else {
        if ((road-num)>num*26){
            cout<<"Case "<<i<<": "<<"impossible"<<endl;
        }
        else if ((road-num)<num){
            cout<<"Case "<<i<<": "<<"1"<<endl;
        }
        else if 
        ((road-num)>num){
            if ((road-num)%2!=0)
            cout<<"Case "<<i<<": "<<((road-num)/2)+1<<endl;
            else 
            cout<<"Case "<<i<<": "<<((road-num)/2)<<endl;
        }
        }
        }
        else {
            cout<<"Case "<<i<<": "<<"impossible"<<endl;
            
        }
                i++;
    }


    return 0;
}