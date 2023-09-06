#include<stdio.h>
int main(){
int n,m,i,j;
int k[1000];
for (j=1;j<=3;j++){
scanf("%d",&n);
for (i=0;i<n;i++){
    scanf("%d",&k[i]);

}
for (i=0;i<n;i++){
    if (k[i]<10){
        printf("1\n");
    }
    break;

}

for (i=0;i<n;i++){

    if (k[i]>=10 && k[i]<20){
        printf("2\n");
        
    }
    break;
}

for (i=0;i<n;i++){

    if ( k[i]>=20){
        printf("3\n");
        
    }
    break;
}



}
    return 0;
}