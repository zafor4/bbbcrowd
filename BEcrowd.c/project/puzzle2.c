#include<stdio.h>
#include <stdbool.h>


//int board[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int board[3][3]={{5,7,8},{3,2,1},{9,4,6}};
void init(){
  printf("\e[1;1H\e[2J");
    for (int i =0;i<3;i++){
    for (int j=0;j<3;j++){
        if (board[i][j]==9){
            printf("|   |");
        }
        else{
        printf("| %d |",board[i][j]);
        }

    }
    printf("\n");
}

}
bool won(){
    for (int i=0,c=1;i<3;i++){
    for (int j=0;j<3;j++,c++){
        if (c!=board[i][j]){
            return false;
        }
        
    }
}
return true;

}

void main(){

init();
while (won()!=1){
    int input ;
    int blank_c,blank_r;
    for (int c=0;c<3;c++){
        for (int r=0;r<3;r++){
            if (board[c][r]==9){
               blank_c=c;
               blank_r=r;
            }
          
        }
    }
 
    scanf("%d",&input);
    if (input==board[blank_c][blank_r+1]){
        board[blank_c][blank_r]=input;
        board[blank_c][blank_r+1]=9;
    }
}



}