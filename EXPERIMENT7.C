//Write a program to solve Towers of Hanoi Problem.
#include<stdio.h>
#include<conio.h>
void tower(int,int,int,int);
void main(){
   int a=1,b=2,c=3,n;
   printf("enter number of disks:- ");
   scanf("%d",&n);
   tower(n,a,b,c);
}
void tower(int k,int x,int y,int z){
    if(k==1)
    printf("%d->%d ",x,y);
    else{
        tower(k-1,x,z,y);
        printf("%d->%d ",x,z);
        tower(k-1,y,x,z);
    }
}