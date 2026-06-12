//check armstrong number by function
#include<stdio.h>
#include<math.h>
void armstrong(int num);//decleration of function prototype
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);
armstrong(num);
return 0;
}
void armstrong(int num)
{
        int rem,sum=0,temp;    
        temp=num;
        while (num!=0)
        {
            rem=num%10;// conditions to check it is armstong or not
            sum=sum+(rem*rem*rem);//it can check only three digit number
            num=num/10;
        }
        if(temp==sum)
        {
        printf("It is a Armstrong number");
        }
        else
        {
            printf("Not a Armstrong Number");
        }
}