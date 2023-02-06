#include<stdio.h>
int main(){
int n,num,i,rev=0,sum=0,r;
printf("enter the value of the number\n");
scanf("%d",&n);
num=n;
while(num>0){
     r=num%10;
    sum=sum+r;
    rev=(rev*10)+r;
    num=num/10;
    }
printf("sum of the given number=%d\n",sum);
if(rev==n){
printf("the given number is a palindrome\n");
//printf("the number is %d\nthe reverse of that number is %d\n",n,rev);
}else
printf("the given number is not a palindrome");
return 0;
}