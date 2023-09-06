#include<stdio.h>
int main(){
double a[12][12];
char s[2];
int i,j,n;
double count=0;
int v=0;
scanf("%s",&n);
s[0]=n;
for(i=0;i<12;i++){
    for (j=0;j<12;j++){
        scanf("%lf",&a[i][j]);
    }
}
for (i=0;i<=4;i++){
    for (j=i+1;j<12-(i+1);j++){
        count+=a[i][j];
        v+=1;
      
    }
    j++;
}
if (s[0]=='S'){
    printf("%.1lf\n",count);
}
else if (s[0]=='M'){
    printf("%.1lf\n",count/v);
}
    return 0;
}