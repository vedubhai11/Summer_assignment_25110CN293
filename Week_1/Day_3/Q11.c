#include<stdio.h>
int main()
{
    int GCD(int a,int b);
int m,n,r;
printf("Enter two numbers: ");
scanf("%d%d",&m,&n);
r=GCD(m,n);
printf("GCD= %d",r);
}
int GCD(int a,int b)
{
 if(b==0)
 {
    return a;
 }   
 else if(a<b)
 {
 return(GCD(b,a));
 }
 else
 {
 return(GCD(b,a%b));
 }
}