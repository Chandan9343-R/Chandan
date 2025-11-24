#include<stdio.h>
int main(){
int arr[10];
printf("Enter elements:");
scanf("%d",&arr);
int n;
printf("Enter a number:");
scanf("")
int value=35,i;
for(i=n-1;i>=0&&arr[i]>value;i--)
    arr[i+1]=arr[i];
arr[i+1]=value;
n++;
printf("Array after insertion:");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
return 0;
}
