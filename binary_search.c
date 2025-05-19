#include<stdio.h>
int main()
{
    int a[10],i,n,key,start=0,mid,end,pass=0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key to search");
    scanf("%d",&key);

     end=n-1;
     while(start<=end)
     {
        pass++;
            mid=(start+end)/2;
            if(key==a[mid])
            {
                printf("element found at position %d \n",mid);
                printf("no. of passes:%d\n",pass);
                break;
            }
            else if(key<a[mid])
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            
            }
        }
        
        if(start>end)
        printf("elements not available\n");
    return 0;
     }

