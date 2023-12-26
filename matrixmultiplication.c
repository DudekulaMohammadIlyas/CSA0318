#include<stdio.h>
int main()
{
        int m1[3][3], m2[3][3], m3[3][3], sum=0, i, j, k;
        printf("\n Enter First Matrix Elements : \n");
        for(i=0; i<3; i++)
        for(j=0; j<3; j++)
              scanf("%d",&m1[i][j]);
        printf("\n Enter Second Matrix Elements : \n");
        for(i=0; i<3; i++)
                for(j=0; j<3; j++)               
                       scanf("%d",&m2[i][j]);
        printf("\n\n Multiplication of Two Matrices : \n");
        for(i=0; i<3; i++)
        {
                for(j=0; j<3; j++)
                {
                        m3[i][j]=0;
                        for(k=0; k<3; k++)
                       m3[i][j]+=m1[i][k]*m2[k][j];
                    printf("%d\t",m3[i][j]);
                }
                   printf("\n");
       }
      return 0;
}
