#include<stdio.h>
int main(){
int n;
printf("Enter a value:");
scanf("%d",&n);
if (n<0){
    printf("%d is negative",n);
}
else{
    printf("%d is not negative",n);
}
return 0;
}
