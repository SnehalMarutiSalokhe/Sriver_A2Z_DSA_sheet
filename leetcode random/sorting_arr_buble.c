#include<stdio.h>
#include<string.h>
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("sorting starts: ");
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
           
        }
         
    }
     
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}