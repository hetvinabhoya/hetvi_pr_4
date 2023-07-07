#include<stdio.h>
#include<conio.h>

void main(){
int i;
clrscr();
for(i=1;i<=6;i++){
   if(i==1||i==2||i==6){
     printf("*             *\n");
   }
   else if(i==3){
     printf("*      *      *\n");
   }
   else if(i==4){
     printf("*    *   *    *\n");
   }
   else{
     printf("*  *       *  *\n");
   }
}
getch();
}

/*  *           *
    *           *
    *     *     *
    *   *   *   *
    * *       * *
    *           *        */
