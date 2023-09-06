#include<stdio.h>
#include<stdlib.h>
int num1,num2,n1[10],n2[10],i,j;
void binary(int a,int b){
scanf("%d %d",&num1,&num2);
for (i=0;num1>0;i++){
    n1[i]=num1%2;
    num1=num1/2;

}
for (j=0;num2>0;j++){
    n2[j]=num2%2;
    num2=num2/2;
}
for(i=i-1;i>=0;i--)    
{    
printf("%d",n1[i]);    
} 
printf("\n");

for(j=j-1;j>=0;j--)    
{    
printf("%d",n2[j]);    
} 

}

int main(){
    binary(num1,num2);
/*int num1,num2,n1[10],n2[10],i,j;
scanf("%d %d",&num1,&num2);
for (i=0;num1>0;i++){
    n1[i]=num1%2;
    num1=num1/2;

}
for (j=0;num2>0;j++){
    n2[j]=num2%2;
    num2=num2/2;
}
for(i=i-1;i>=0;i--)    
{    
printf("%d",n1[i]);    
} 
printf("\n");

for(j=j-1;j>=0;j--)    
{    
printf("%d",n2[j]);    
} 
printf("\n");
for (i=i-1,j=i-1;i>=0,j>=0;i--,j--){
    printf("%d",n1[i]+n2[j]);
}*/

    return 0;
}