#include<stdio.h>
#define row 2
#define col 2
int main(){
    int mat1[row][col]={1,2,3,4};
    int mat2[row][col]={1,2,3,4};
    int res[row][col];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         scanf("%d",&Array[i][j]);
    //     }
        
    // }
    printf("\n\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ",mat1[i][j]);
        }
        printf("\n");
        
    }
    printf("\n\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ",mat2[i][j]);
        }
        printf("\n");
        
    }
//  printf("here we are convert in transpose:\n");

//  for (int i = 0; i <row; i++)
//  {
//     for (int j = 0; j < col; j++)
//     {
//         printf("%d ",Array[j][i]);
//     }
//     printf("\n");
//  }
 
 printf("output is \n\n");
 for(int i=0;i<row;i++)    
{    
for(int j=0;j<col;j++)    
{    
res[i][j]=0;    
for(int k=0;k<col;k++)    
{    
res[i][j]+= mat1[i][k]*mat2[k][j];    
}    
}    
}    

 printf("\n\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ",res[i][j]);
        }
        printf("\n");
        
    }
   
    return 0;
}