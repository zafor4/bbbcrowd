#include<stdio.h>
int main(){
    int x,i,j,sum1=0,sum2=0;
while(1){
    scanf("%d",&x);
    if (x==0)
    break;
    if (x%2==0){
        for (i=1;i<=5;i++){
            sum1+=x;
            x+=2;
        }
        printf("%d\n",sum1);

    }
    else if (x%2!=0){
        for (j=1;j<=5;j++){
            sum2+=(x+1);
            x+=2;
        }
        printf("%d\n",sum2);
    }

}

    return 0;
}
