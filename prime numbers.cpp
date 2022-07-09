#include<stdio.h>
int main()
{
    int i,num1,num2;

    printf("Enter The Two Number:");
    scanf("%d%d",&num1,&num2);
    for(int n=num1;n<=num2;n++)
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
      printf("%d ",n);
    }
}
