#include<stdio.h>
void even(){
	
  int i;
  printf("the  even numbers from 1 to 100 numbers :");
  for(i=0;i<=100;i++){
   if(i%2!=1){
   
   printf("\n%d",i);
}
  }
}
void main(){
  printf("the even numbers from 1 to 100 numbers :");
  
  even();
}
