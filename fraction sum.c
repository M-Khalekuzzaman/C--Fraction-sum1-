#include<stdio.h>
int main()
{
    int number;
    float sum = 0;
    printf("Input your last number :");
    scanf("%d",&number);
    printf(" S :\n");
    for(int i = 1;i<=number;i++)
    {

        sum = sum + (float)1/i;
    }
    printf("value of S : %.2f\n",sum);
    getch();
}
