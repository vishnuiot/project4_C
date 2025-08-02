#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    printf("Ich kann rechnen mit Double \n");  
    
    double zahl,summe;
    printf("Bitte eine Zahl eingeben \n");
    scanf("%lf",&zahl);
    summe=summe+zahl;
    printf("summe is = %lf \n",summe);
    printf("Bitte eine Zahl eingeben \n");
    scanf("%lf",&zahl);
    summe=summe+zahl;
    printf("summe is = %lf \n",summe);
    
    return 0;
}

