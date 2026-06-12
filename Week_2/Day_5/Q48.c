//check perfect number by function
#include<stdio.h>
void perfect(int num);//decleration of function prototype
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);
perfect(num);
return 0;
}
void perfect(int num)
{
     int i,sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)// check number is divisor of number or not
        {
            sum=sum+i;//add if number is divisor of entered number
        }
    }
    if(sum==num)
    {
        printf("Number is Perfect Number");
    }
    else
    {
        printf("Number is not Perfect Number"); 
    }
}