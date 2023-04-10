 # include<stdio.h>
 int main(){
     int a,b;
     int num=0;
     printf("entre value of a is :");
     scanf("%d",&a);
     printf("entre value of b is :");
     scanf("%d",&b);
     do{
     switch(num){
         case 0 :printf("sum of %d and %d is %d \n",a,b,a+b);
         break;
         case 1 :printf("Difference of %d and %d is %d \n",a,b,a-b);
         break;
         case 2:printf("multiplication of %d and %d is %d \n",a,b,a*b);
         break;
         case 3:printf("Division of %d and %d is %d\n",a,b,a/b);
         break;
         case 4:printf("remainder of %d and %d is %d \n",a,b,a%b);
         break;
         
     }
     num++;
     }while(num<5);
     return 0;
 }