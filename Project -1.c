#include <stdio.h>
#include <conio.h>
#include <string.h>


void pattern();
void votes();
void occurence();
void pointer();
void gcd_lcm();
int gcd(int n[2]);


void main()
{
    int n ;
    do{
    printf("\n");    
    printf("\n  __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __");
    printf("\n |                                                                                |\n");
    printf(" | 1) Print a pattern.                                                            |\n");
    printf(" | 2) Count votes and display the Invalid Votes.                                  |\n");
    printf(" | 3) Detect the occurence of a character in a string.                            |\n");
    printf(" | 4) Display the values , addresses and size of all the variables.               |\n");
    printf(" | 5) Calculate GCD and LCM of two numbers.                                       |\n");
    printf(" |   Enter 0 to QUIT.                                                             |\n");
    printf(" |__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __|\n");
    printf("\n Enter your choice(0-5) : ");
    scanf("%d",&n);
    printf("\n");
    if(n==1)
    {
        pattern();
    } 
    else if(n==2)
    {
        votes();
    } 
    else if(n==3)
    {
        occurence();
    } 
    else if(n==4)
    {
        pointer();
    } 
    else if(n==5)
    {
        gcd_lcm();
    } 
    else if(n==0)
    {
        n=0;
    } 
    else
    {
        printf(" INVALID CHOICE ! \n");
    }
    
    
    } while(n!=0);

getch();

}



void pattern()
{
int i , j , arr[7] = {0,1,2,3,4,5,6} ;
    
    for(i=6 ; i>=0 ; i--)
    {
        for(j=i ; j>=0 ; j--)
        {
            printf(" %d",arr[j]);
        }
    printf("\n");    
    }
}


void votes()
{
    int x=0 , y=0 , z=0 ;
    char v , invalid[10] ;
    
    for(int i=0;i<10;i++)
    {
        printf(" Person %d enter your vote : ",i+1);
        scanf(" %c",&v);
    
        if( v == 'A' || v == 'a' )
        {
            x++;
        }
        else if( v == 'B' || v == 'b' )
        {
            y++;
        }
        else
        {
            invalid[z]=v;
            z++;
        }
    }
    
    printf("\n Total Votes Secured by party 'A' = %d ",x);
    printf("\n Total Votes Secured by party 'B' = %d ",y);
    printf("\n %d Invalid Votes are = {",z);
    
    for(int i=0 ; i < z ; i++)
    {
        printf(" %c ",invalid[i]);
    }
    printf("}");
}


void occurence()
{
    char c,str[20];
    int i,l,occ=0;
    
    printf(" Enter a string : ");
    scanf(" %s",str);
    printf(" Enter a character from the above entered string : ");
    scanf(" %c",&c);
    
    l=strlen(str);
    
    for(i=0 ; i<l ; i++)
    {
        if(c==str[i])
        occ++;
    }
    printf(" The occurence of '%c' in string \"%s\" = %d times",c,str,occ);
}


void pointer()
{
    char a ;
    int b ;
    float c ;
   
    printf(" Enter the value of a Character Variable : ");
    scanf(" %c",&a);
    printf(" Enter the value of a Integer Variable : ");
    scanf(" %d",&b);
    printf(" Enter the value of a Float Variable : ");
    scanf(" %f",&c);
   
    char *ptr1 = &a ;
    int *ptr2 = &b ;
    float *ptr3 = &c ;
    
    printf("\n\n The Value of Character Variable  = %c",*ptr1);
    printf("\n The Value of Integer Variable  = %d",*ptr2);
    printf("\n The Value of Float Variable  = %f",*ptr3);
    
    printf("\n\n Address of Character Variable = %p",ptr1);
    printf("\n Address of Integer Variable = %p",ptr2);
    printf("\n Address of Float Variable = %p",ptr3);

    printf("\n\n Size of Character Variable = %lu byte",sizeof(a));
    printf("\n Size of Integer Variable = %lu byte",sizeof(b));
    printf("\n Size of Float Variable = %lu byte",sizeof(c));
    
}


void gcd_lcm(){

    int n[2],lcm ;
    printf(" Enter 1st Number : ");
    scanf("%d",&n[0]);
    printf(" Enter 2nd Number : ");
    scanf("%d",&n[1]);
    printf("\n Greatest Common Divisior (GCD) of %d and %d = %d",n[0],n[1],gcd(n));
    lcm = (n[0]*n[1])/gcd(n);
    printf("\n\n Least Common Factor (LCM) of %d and %d = %d",n[0],n[1],lcm);

}

int gcd(int n[2])
{
    int temp;
    if(n[0]>n[1])
    {
        temp=n[0];
    }
    else
    {
        temp=n[1];
    }
    for(int i=temp ; i>=1 ; i--)
    {
        if(n[0]%i==0  && n[1]%i==0)
        {
        return i;
        break;
        }
    }

}



