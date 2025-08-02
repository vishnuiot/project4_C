#include<stdio.h>

int main()
{
    printf("\n\t WäHRUNGS RECHNEN PROGRAMM \n");
    double betrag,u_rechnung;
    printf("Bitte Betrag eingeben \n");
    scanf("%lf",&betrag);
    printf("Bitte Betrag umrechnungsfaktor eingeben \n");
    scanf("%lf",&u_rechnung);
    printf("\n");
    printf("Ergebnis = %.2lf  \n",betrag*u_rechnung);

}