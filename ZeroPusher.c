/* Code to push all zeroes in an array to end of array in only one loop. */

#include<stdio.h>

   int arr[]={0,0,2,1,0,1,0,0,1,0};
   int i,x;

int findright(int);   
   
int main(void)
{
   for(i=0;i<9;i++)
     {
       if(!arr[i])
         { 
           x=findright(i);
           //printf("x = %d\n",x);
           arr[i]=arr[x];
           arr[x]=0;
           //printf("%d %d %d %d\n", x, arr[x], i, arr[i]);
           printf("%d ",arr[i]);
         }
     }
    return 0;           
}

int findright(int n)
{
     if(!arr[n+1])
       findright(n+1);
     else if(n>=9);
     else 
       return n+1;
} 
