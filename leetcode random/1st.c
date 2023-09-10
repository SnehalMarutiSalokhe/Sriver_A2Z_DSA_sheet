#include<stdio.h>
#include<string.h>
int maximumBags(int* capacity, int capacitySize, int* rocks, int additionalRocks){
   int sumRock=additionalRocks,temp,sumCapy=0,remen[capacitySize];
   for(int i=0;i<capacitySize;i++)
   {
       sumRock=sumRock+rocks[i];
       sumCapy=sumCapy+capacity[i]+1;
   }
    if(sumRock>=sumCapy)
    {
        return capacitySize;
    }
    else
    {
        int count=0;
        for(int i=0;i<capacitySize;i++)
        {
            remen[i]=(capacity[i]+1)-rocks[i];
                  
        }
        for(int i=0;i<capacitySize;i++)
        {
            for(int j=0;j<capacitySize-i-1;j++)
            {
                if(remen[j]>remen[j+1])
                {
                    temp=remen[j];
                    remen[j]=remen[j=1];
                    remen[j+1]=temp;
                }
            }
        }
        for(int i=0;i<capacitySize;i++)
        {
                if(remen[i]!=0 && additionalRocks>=remen[i])
                {
                   additionalRocks=additionalRocks-remen[i];
                   remen[i]=0;
                }
                    if(remen[i]==0)
                    {
                         count++;
                    }
        }
        return count;
    }
 }

int main()
{
    int  capacitySize,  rocksSize,  additionalRocks ;
     int* capacity;
     capacity[0]=2;
     capacity[1]=3;
     capacity[2]=4;
     capacity[3]=5;
     capacitySize=4,additionalRocks=2;
    int* rocks;
    rocks[0]=1;
    rocks[1]=2;
    rocks[2]=4;
    rocks[3]=4;
     rocksSize=maximumBags( capacity,  capacitySize,  rocks,  additionalRocks);
   printf("hwllo");
printf("%d",rocksSize);
return 0;
}