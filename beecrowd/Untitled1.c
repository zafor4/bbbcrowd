#include<stdio.h>
int main(){
int a[100];
int i;
for (i=0;i<5;i++){
    scanf("%d",a[i]);
}
for (i=0;i<5;i++){
    if (a[i]<=0){
        printf("A[%d] = %d",i,a[i]);
    }
}

    return 0;
}
