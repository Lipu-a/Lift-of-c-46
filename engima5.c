 # include<stdio.h>
 int main(){
     double radius,circumferance;
     double pi=3.14;
     printf("put the value of radius of any circle :");
     scanf("%lf",&radius);
     printf("Diameter of circle is %lf \n",2*radius);
     printf("circumferance of circle is %lf \n",pi*radius*2);
     printf("area of the circle is %lf \n ",pi*radius*radius);
     return 0;
     
     
 }