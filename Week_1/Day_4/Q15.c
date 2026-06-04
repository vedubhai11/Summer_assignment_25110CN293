//check Number is Armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,sum=0,temp;
    printf("Enter a number to check\n");
    scanf("%d",&num);    
        temp=num;
        while (num!=0)
        {
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(temp==sum)
        {
        printf("Armstrong number");
        }
        else
        {
            printf("Not Armstrong Number");
        }
    return 0;
}