#include<stdio.h>
void main(){
    int a,b,choice;
    
    printf("Enter a:");
    scanf("%d",&a);
    
    printf("Enter b:");
    scanf("%d",&b);
    
    printf("1.add\n2.sub\nEnter choice:");
    scanf("%d",&choice);
    
    if(choice==1){
        printf("%d\n",a+b);
    }
    else{
        printf("%d\n",a-b);
    }
}