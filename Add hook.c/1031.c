#include<stdio.h>
int finding_M(int N,int Target){
    int r = 0;
    for (int i = 1; i < N; i++){
        r = (r + Target) % i;
    }

    return r;
}
int main(){
    int n;
    scanf("%d",&n);
    int target=13;
    while(1){
        if (n==0){
            break;
        }
        int initial=1;
        while(1){
        if (finding_M(n,target)!=13){
            initial++;
        }
        else {
            break;
        }
        }
        printf("%d\n",initial);
    }


    return 0;
}