//To implement pattern
//Name - Soumya Banerjee

#include<stdio.h>
int main()
{
    char ch;
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        ch='a';
        for(int k=1;k<=n-i;k++)
        printf(" ");
        if (i%2==0)
        {
            for(int j=i;j>=1;j--)
            printf("%c",ch+j-1);

        }
        else
        for (int j=1;j<=i;j++)
        printf("%c",j+ch-1);
        printf("\n");
    }
    return 0;
}