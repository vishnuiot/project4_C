# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<math.h>

int main(int argc, char const *argv[])
{
    float x,y;
    printf("\n \t Rechnen mit Gleitkommazahlen" );
    printf("Bitte x und y eingeben \n");
    scanf("%f %f",&x,&y);
    printf("\n \t %f + %f = %f \n",x,y,x+y);
    printf("\t %f - %f = %f \n",x,y,x-y);
    printf("\t %f * %f = %f \n",x,y,x*y);
    printf("\t %f / %f = %f \n",x,y,x/y);
    printf("\t %f %% %f = %f \n",x,y,x/y);

    return 0;
}