#include<stdio.h>
void main() {
    int r,c,a[10][10],b[10][10],sum[10][10],i,j;
    printf("Enter no of rows:\n");
    scanf("%d",&r);
     printf("Enter no of columns:\n");
    scanf("%d",&c);
    printf("Enter elements of first matrix:\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++) {
        printf("Enter element a%d%d:",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
       printf("Enter elements of second matrix:\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++) {
        printf("Enter element b%d%d:",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
    printf("\n sum of two matrices:\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++) {
        printf("%d  ",sum[i][j]);
        if(j==c-1) {
            printf("\n\n");
        }
    }
    
}