#include<stdio.h>

int main(){
int x,x1,i,j,sum1=0,sum2=0;
while (1){
scanf("%d",&x);
if (x==0){
    break;
}

if (x%2==0){
    sum1=0;
    for (i=1;i<=5;i++){
        sum1+=x;
        x+=2;
    }
    printf("%d\n",sum1);
}
else {
    sum2=0;
    x1=x+1;
   for(j=1;j<=5;j++)
   {
    sum2+=x1;
    x1+=2;
   }
   printf("%d\n",sum2);
}
}

    return 0;
}