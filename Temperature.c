#include<stdio.h>
void main(){
    int temp;
    printf("enter the temp:");
    scanf("%d",&temp);
    if (temp<=20){
        printf("wear a sweater\n");
    }
    else if(temp>20 && temp<30){
        printf("do nothing\n");
    }
    else{
        printf("wear a t-shirt\n");
    }
}