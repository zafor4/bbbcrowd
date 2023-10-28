#include<iostream>
#include<vector>
using namespace std;
int isPrime(int n)
{
 
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
 
    return 1;
}
int main(){
    int n;
    int count=0;
    cin>>n;
    vector<int>v;
    while (n>1){
        int res=isPrime(n);
        if (res==1){
            count++;
            if (isPrime(n-2)==1){
                cout<<n<<" "<<n-2<<endl;
                break;
            }
            else {
                count=0;
            }
        }
        n--;

    }


    return 0;
}