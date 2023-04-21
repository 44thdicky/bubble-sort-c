//EIN LOTTOSCHEIN
#include <stdlib.h>
#include <stdio.h>
#include <time.h>   
#define ARRAY_SIZE 6
#define size 6
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
    int i,j;
    time_t t;
    srand(time(NULL));
    for(i=0;i<size;i++){
        igewinnerzahlen[i]=rand()%49;
        igewinnerzahlen[i]+=1;
        for(j=0;j<i;j++){
            if(igewinnerzahlen[i]==igewinnerzahlen[j]){
                i--;
            }
        }
    }
}
void zufaelligeZahlen(int iZahlen[][6], int iTippAnzahl)
{
    int i,j,k;
    for(k=0;k<iTippAnzahl;k++){ 
        for(i=0;i<6;i++){
            iZahlen[k][i]=rand()%49;
            iZahlen[k][i]+=1;
            for(j=0;j<i;j++){
                if(iZahlen[k][i]==iZahlen[k][j]){
                    i--;
                }
            }
        }
    }
}
void gewinnvergleich(){
    int i;
    int iTipp[6]={};
    int igewinnerzahlen[6]={};

    for (i=1;i<6;i++){
        for (i=0;i<5;i++){
            if (igewinnerzahlen[0]==iTipp[0])
            {
                printf("Eine richtig getippte Zahl!");
            }
            else if(igewinnerzahlen[1]==iTipp[1]) 
            {
                printf("Eine richtig getippte Zahl!");
            }
        }
    }
}
int main ()
{
    while(1){
    int iTipp[6]={0};
    int igewinnerzahlen[6]={0};
    float dzahlung;
    float fpreis=1.2;
    float fsumme=0.0;
    int i;
    int itag;
    int imonat;
    int ijahr;
    int j;
    float fgewinn[6]={0, 1000, 2000, 4000, 1000000, 15000000};

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
        printf("Bitte zahlen Sie folgenden Betrag: %.2lf Euro\n", fpreis);
        fflush(stdin);
     do 
        {
        printf("Noch zu zahlen: %.2f €\n", fpreis-fsumme);
        scanf("%f", &dzahlung);
            if(dzahlung==5||dzahlung==2||dzahlung==1)
            {
                fsumme+=dzahlung;
            }
            else
            {
                printf("Erlaubt: 1 Euro, 2 Euro, 5 Euro\n");
            } 
        } 
        while(fsumme<1.2);
        
        if(fsumme>dzahlung)
        {
            printf("Wechselgeld betraegt: %.2f\n", fsumme-fpreis);
            if(fsumme>dzahlung){
                printf("Ihr Kontostand betraegt: %.2lf\n", fsumme-fpreis);
            }
        }
        {
    printf("Geben Sie Ihren Tipp ein: \n");

        //under construction - hier soll der Duplikatentdecker rein
        for (i=0;i<6;i++){
            printf("Geben Sie ihre %i. Zahl ein:\n", i+1);
            scanf("%i", &iTipp[i]);
            if(iTipp[i]>49||iTipp[i]<1)
            {
                printf("Bitte Zahlen von 1-49 tippen!\n");
                abort();
            }
            for(j=0;j<i;j++){
                if(iTipp[i]==iTipp[j]){
                    i--;
                }
            }
        } 
        }
     }
        bubblesort(iTipp, 6);
        for(i=0; i<6;i++)
        {
            printf("\n Die getippten Zahlen lauten: %i\t", iTipp[i]);
        }
        gewinnerzahlen(igewinnerzahlen);
        for(i=0;i<6;i++){
            bubblesort(igewinnerzahlen, 6);
            printf("\nDie Gewinnerzahlen lauten: %d\n", igewinnerzahlen[i]);
            }
        gewinnvergleich();
    }
}
