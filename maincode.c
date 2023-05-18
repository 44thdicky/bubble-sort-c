#include <stdlib.h>
#include <stdio.h>

#define ARRAY_SIZE 6

void bubblesort(int array[], int laenge){
     int i, j, tmp;
    for(i=1;i<laenge;i++)
    {
        for (j=0;j<laenge-i;j++)
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
void gewinnerzahlen(int igewinnerzahlen[])
{
    int i,j,k;
    for(i=0;i<6;i++){
        igewinnerzahlen[i]=rand()%49;
        igewinnerzahlen[i]+=1;
        for(j=0;j<i;j++){
            if(igewinnerzahlen[i]==igewinnerzahlen[j]){
                i--;               
            }
        }
    }
}
int main ()
{
    while(1){
    int iTipp[6]={0};
    int igewinnerzahlen[6]={0};
    int i;
    //int num;
    int j;
    int is_duplicate=0;
    int k;

    printf("\n++++++++++++++++++++++++++++\n");
    printf("\t\nLottoprogramm\n");
    printf("\n++++++++++++++++++++++++++++\n");

    printf("Geben Sie Ihren Tipp ein: \n");

        //under construction - hier soll der Duplikatentdecker rein
        for (i=0;i<6;i++){
            printf("Geben Sie ihre %i. Zahl ein:\n", i+1);
            scanf("%i", &iTipp[i]);
            if(iTipp[i]>49&&iTipp[i]<1)
            {
                printf("Bitte Zahlen von 1-49 tippen!\n");
                abort();
            }
            for(j=0;j<i;j++){
                if (iTipp[i]==iTipp[j]){
                    i--;
                }
            }
            //else if(iTipp[i]==iTipp[k])
            //{
                //printf("Duplikat entdeckt!");
                //i++;
            //}
        } 
        //// under construction //
        bubblesort(iTipp, 6);
        for(i=0; i<6;i++)
        {
            printf("\n Die getippten Zahlen lauten: %i\t", iTipp[i]);
        }
        printf("\n-------------------------------------");

        gewinnerzahlen(igewinnerzahlen);

        for(i=0;i<6;i++){
            bubblesort(igewinnerzahlen, 6);
            printf("\nDie Gewinnerzahlen lauten: %d\n", igewinnerzahlen[i]);
            }
            if(iTipp[i]==igewinnerzahlen[i]){
            printf("Sie haben gewonnen! Der Preis betraegt 15.000.000 Euro!\n");
            }
            else
            {
            printf("Das naechste Mal!\n");
            }    
    }
}