#include <stdio.h>
#include <stdlib.h>

void bubblesort(int array[], int length)
{
    int i, j, tmp;
    for(i=1;i<length;i++)
    {
        for (j=0;j<length-i;j++)
        {
            if(array[j]>array[j+1])
            {
                tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
    }
}
int main()
{
    int iTipp[6]={6,8,10,2,4,7};
    bubblesort(iTipp, 6);
    printf("%i %i %i %i %i %i", iTipp[0], iTipp[1], iTipp[2], iTipp[3], iTipp[4], iTipp[5]);
}