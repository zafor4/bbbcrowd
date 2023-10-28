#include<iostream>
using namespace std;
int main(){
    int a,b,m;

    while (scanf("%d%d%d",&a,&b,&m)){
        int d,e;

        for (int i=0;i<m;i++){
            cin>>d>>e;
            if ((d <= a && e <= b) || (d <= b && e <= a)){
                printf("Sim\n");
            }
            else {
                printf("Nao\n");
            }
        }

    }


    return 0;
}