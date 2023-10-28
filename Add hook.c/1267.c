#include<stdio.h>
int main(){
    while (1){
        int n,d;
        scanf("%d%d",&n,&d);
        if (n==0&& d==0){
            break;
        }
        int arr[d][n];
        for (int i=0;i<d;i++){
            for (int j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        int flag;
        for (int i=0;i<n;i++){
            flag=0;
            for (int j=0;j<d;j++){
            if (arr[j][i]==0){
                flag=1;
                break;
            }
            }
            if ( flag==0){
                printf("yes\n");
                break;
            }
        }
        if (flag==1){
            printf("no\n");
        }

    }

    return 0;
}