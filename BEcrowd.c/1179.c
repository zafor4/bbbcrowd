#include<stdio.h>
int main(){
int par[5],impar[5],p=0,q=0;
int i,j,k,n;
for (i=1;i<=15;i++){

  scanf("%d",&n);
  if (n%2==0){
    if (p<5){
    par[p]=n;
   
    printf("par[%d] = %d\n",p,par[p]);
     p++;
    }
    else {
      p=0;
    }
  }
  else {
        if (q<5){
    impar[q]=n;
   
    printf("impar[%d] = %d\n",q,impar[q]);
     q++;
    }
    else {
      q=0;
    }
  }
}



  return 0;
}