// To implement Matrix Multiplication

#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,m,n,p,q;
    printf("\nThe row & column of Matrix A : \n");
    scanf("%d, %d",&m,&n);
    printf("\nThe row & column of Matrix B :\n");
    scanf("%d, %d",&p,&q);

    if (n==p)
    {
        printf("\nFor Matrix A:-\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
            printf("\nEnter values for A[%d][%d]=> ",i,j);
            scanf("%d",&a[i][j]);
            }
        }
        printf("\nFor Matrix B:-\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("\nEnter values for B[%d][%d]=> ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        //Matrix Multiplication Logic
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
	                c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("\nMultiplication Matrix C is\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf ("\n");
        }
    }
}
