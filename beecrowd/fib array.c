#include<stdio.h>
int main(){
int t,i,n,a[60],a[0]=0,a[1]=1;
scanf("%d%d",&t,&n);
for (i=2;i<60;i++){
a[i]=a[i-2]+a[i-1];
printf("%d\n",a[i]);
}



    return 0;
}