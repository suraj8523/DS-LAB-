//Write a program to perform following operations on matrix: a) Addition b) Subtraction c) Multiplication d) Transpose
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("enter element of first array:-");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter element of second array:-");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition of two matrix :-\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }    
     printf("Substraction of two matrix :-\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }    
      
for(i=0;i<3;i++)    
{    
for(j=0;j<3;j++)    
{    
c[i][j]=0;    
for(k=0;k<3;k++)    
{    
c[i][j]=c[i][j]+a[i][k]*b[k][j];    
}    
}    
}
 printf("multiply of the matrix:-\n"); 
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    } 
      printf("transpose of the multiply matrix:-\n"); 
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[j][i]);
        }
        printf("\n");
    }   
}