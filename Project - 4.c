#include <stdio.h>
#include <conio.h>

void read(int arr1[10][10] , int arr2[10][10]);
void display(int arr1[10][10] , int arr2[10][10]);
void add_and_sub(int arr1[10][10] , int arr2[10][10]);
void scalar_mul(int arr1[10][10] , int arr2[10][10]);
void matrix_mul(int arr1[10][10] , int arr2[10][10]);

int r,c;

void main()
{
    int n ,arr1[10][10],arr2[10][10];
    do 
    {
    printf("\n");    
    printf("\n  __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __");
    printf("\n |                                                                                |\n");
    printf(" | 1) Read Matrix.                                                                |\n");
    printf(" | 2) Display Matrix.                                                             |\n");
    printf(" | 3) Add and Subtract the Matrix.                                                |\n");
    printf(" | 4) Scalar Multiply of Matrix.                                                  |\n");
    printf(" | 5) Matrix Multiply.                                                            |\n");
    printf(" |   Enter 0 to QUIT.                                                             |\n");
    printf(" |__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __|\n");
    printf("\n Enter your choice(0-5) : ");
    scanf("%d",&n);
    printf("\n");
    
    switch(n){
        case 1 :
        read(arr1,arr2);
        break;
        case 2 :
        display(arr1,arr2);
        break;
        case 3 :
        add_and_sub(arr1,arr2);
        break;
        case 4 :
        scalar_mul(arr1,arr2);
        break;
        case 5 :
        matrix_mul(arr1,arr2);
        break;
        default :
        printf(" INVALID CHOICE ! ");
        break;
    } 
    
    }while(n!=0);

getch();

}



void read(int arr1[10][10],int arr2[10][10])
{
    printf("Enter the size of row of Matrices : ");
    scanf("%d",&r);
    printf("Enter the column of row of Matrices : ");
    scanf("%d",&c);
    printf("\nEnter elements of Matrix 1 \n\n");
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            printf("Enter Element arr1[%d][%d] : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter elements of Matrix 2 \n\n");
     for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            printf("Enter Element arr2[%d][%d] : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
}

void display(int arr1[10][10],int arr2[10][10])
{
    printf("\n 1st Matrix is : \n");
    printf("[");
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            printf(" %d ",arr1[i][j]);
        }
    if(i!=r-1)
    printf("\n ");
    else
    printf("]");
    }
    
    printf("\n 2nd Matrix is : \n");
    printf("[");
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            printf(" %d ",arr2[i][j]);
        }
    if(i!=r-1)
    printf("\n ");
    else
    printf("]");
    }
}

void add_and_sub(int arr1[10][10] , int arr2[10][10])
{
    printf("\nThe Matrix after Addition is : \n");
    printf("[");
    int sum[100][100];
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j] ; 
            printf(" %d ",sum[i][j]);
        }
    if(i!=r-1)
    printf("\n ");
    else
    printf("]");
    }
}

void scalar_mul(int arr1[10][10] , int arr2[10][10])
{
    printf("\nThe Matrix after scalar multiplication is : \n");
    printf("[");
    int mul1[10][10];
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            mul1[i][j] = arr1[i][j] * arr2[i][j] ; 
            printf(" %d ",mul1[i][j]);
        }
    if(i!=r-1)
    printf("\n ");
    else
    printf("]");
    }
}

void matrix_mul(int arr1[10][10] , int arr2[10][10])
{
    int mul2[10][10],sum;
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            sum = 0;
            for(int k=0 ; k<r ; k++)
            {
                sum += arr1[i][k] * arr2[k][j] ;
            }
            mul2[i][j]=sum;
        }
    }
    printf("\nThe Matrix after Matrix multiplication is : \n");
    printf("[");
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            printf(" %d ",mul2[i][j]);
        }
    if(i!=r-1)
    printf("\n ");
    else
    printf("]");
    }
}


