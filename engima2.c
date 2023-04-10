 # include<stdio.h>
 int main(){
    int a;
    printf("entre any number to check positive , negative or zero");
    scanf("%d",&a);
    if(a>0){
        printf("positive");

    }
    else if(a<0){
        printf("negative");
    }
    else if(a==0){
        printf("zero");
    }
    return 0;
 }