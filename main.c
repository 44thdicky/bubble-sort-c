#include <stdlib.h>
#include <stdio.h>

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

int main ()
{
   
    while(1){
    int iTipp[6]={0};
    float dzahlung;
    float fpreis=14.4;
    float fsumme=0.0;
    int i;
    printf("\n++++++++++++++++++++++++++++\n");
    printf("\t\nLottoprogramm\n");
    printf("\n++++++++++++++++++++++++++++\n");

    printf("Bitte zahlen Sie folgenden Betrag: %.2lf Euro\n", fpreis-fsumme);
        do 
        {
        printf("Noch zu zahlen: %.2f €\n", fpreis-fsumme);
        scanf("%f", &dzahlung);
            if(dzahlung==10||dzahlung==5||dzahlung==20)
            {
                fsumme+=dzahlung;
            }
            else
            {
                printf("Erlaubte Scheine: 5 Euro, 10 Euro, 20 Euro\n");
            } 
        } 
        while(fsumme<14.40);
        if(fsumme>dzahlung)
        {
            printf("Wechselgeld betraegt: %.2f\n", fsumme-fpreis);
        }
        {
    printf("Geben Sie Ihren Tipp ein: \n");

        for (i=0;i<6;i++){
            printf("Geben Sie ihre %i. Zahl ein:\n", i+1);
            scanf("%i", &iTipp[i]);
        }
        
        
        //under construction
        bubblesort(iTipp, 6); 

        printf("\nDie getippten Zahlen lauten: \t%i\t %i\t %i\t %i\t %i\t %i\n", iTipp[0], iTipp[1], iTipp[2], iTipp[3], iTipp[4], iTipp[5]);
        }
    }
   
}