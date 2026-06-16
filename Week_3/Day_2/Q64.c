//Removing duplicate elements
#include<stdio.h>
int main()
{
int a[50],i,j,k, dup [50],n;
printf("\nEnter thre size of the array:");
scanf("%d",&n);
printf("\nEnter the element of the array:");
for(i=0;i<n; i++)
{
scanf("%d",&a[i]);
dup[i]=-1;
}
printf("\n Enter elements are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n;k++)
{
a[k]=a[k+1];
}
j--;
n--;
}
}
}
printf("after deleting duplicate element\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}