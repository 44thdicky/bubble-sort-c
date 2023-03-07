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
void dupilkat(int array[], int laenge)
{
    int i;
    int k;
    int tmp;
    
    for (i=1;i<laenge;i++)
    {
        if(array[1]==array[k]){
            tmp=array[i];
            array[i]=array[k+1];
            array[k+1]=array[i];

        }
    }
}

int main ()
{
    while(1){
    int iTipp[6]={0};
    int igewinnerzahlen[6]={0};
    float dzahlung;
    float fpreis=14.4;
    float fsumme=0.0;
    int i;
    int itag;
    int imonat;
    int ijahr;
    //int num;
    int j;
    int is_duplicate=0;
    int k;

    printf("\n++++++++++++++++++++++++++++\n");
    printf("\t\nLottoprogramm\n");
    printf("\n++++++++++++++++++++++++++++\n");

    printf("Das Spielen unter 18 Jahren ist strengstens untersagt. Bei Glücksspielsucht unbedingt Hilfe aufsuchen unter: bzga.de/infotelefone/gluecksspielsucht\n");
    printf("Altersüberprüfung:\n");
    printf("Bitte geben Sie Ihr Geburtsdatum ein (tt.mm.yyyy)\n");
    scanf("%i.%i.%i", &itag, &imonat, &ijahr);
 
    if(ijahr>2005){
        printf("Sie sind zu jung, um Lotto spielen zu können\n");
    }
    else {
        printf("Bitte zahlen Sie folgenden Betrag: %.2lf Euro\n", fpreis-fsumme);
     fflush(stdin);
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

        //under construction - hier soll der Duplikatentdecker rein
        for (i=0;i<6;i++){
            printf("Geben Sie ihre %i. Zahl ein:\n", i+1);
            scanf("%i", &iTipp[i]);
            if(iTipp[i]>49&&iTipp[i]<1)
            {
                printf("Bitte Zahlen von 1-49 tippen!\n");
                abort();
            }
            dupilkat(iTipp, 6);
            //else if(iTipp[i]==iTipp[k])
            //{
                //printf("Duplikat entdeckt!");
                //i++;
            //}
        } 
        }
     }
        //// under construction //
        bubblesort(iTipp, 6);
        for(i=0; i<6;i++)
        {
            printf("\n Die getippten Zahlen lauten: %i\t", iTipp[i]);
        }
        printf("\n-------------------------------------");

        for(int i=0;i<6;i++){
            do {
                int is_duplicate=0;
                igewinnerzahlen[i]=(rand()%49)+1;
                for(j=0;j<i;j++){
                    if(igewinnerzahlen[i]==igewinnerzahlen[j]){
                        is_duplicate=1;
                        break;
                    }
                } 
            }
            while (is_duplicate); 
        }
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
