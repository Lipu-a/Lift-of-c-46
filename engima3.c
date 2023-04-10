# include<stdio.h>
int main(){
    int a,b;
    
    printf("entre value of a :");
    scanf("%d",&a);
    printf("entre value of b is :");
    scanf("%d",&b);

    do{
        printf("sum of %d and %d is %d",a,b);
    }while(a+b>a+b);
    return 0;

}