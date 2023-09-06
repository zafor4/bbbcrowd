#include<iostream>
using namespace std;
int countNumOfDigit(int b){
    int count=0;
    while (b>0){
        b=b/10;
        count++;
    }
    return count;
}
int main(){
    int n;
    
    cin>>n;

    for (int i=0;i<n;i++){
            int a,b;
            int p=10,res,res2,loop,loop2,y;
        cin>>a>>b;
        loop=countNumOfDigit(b);
        loop2=countNumOfDigit(a);
        if (loop==1 && loop2==1){
            if (a==b){
                    cout<<"encaixa"<<endl;
            }
                    else {
            cout<<"nao encaixa"<<endl;
        }
        }
        else {
        for (int j=0;j<loop;j++){
            if (j==0){
            y=a%10;
            a=a/10;
            res=y;
            }
            else{

                y=a%10;
                a=a/10;
                res2=p*y+res;
                p*=10;
                res=res2;
            }


        }
        // cout<<res;
        if (res==b){
            cout<<"encaixa"<<endl;
        }
        else {
            cout<<"nao encaixa"<<endl;
        }
    }
    }

    return 0;
}