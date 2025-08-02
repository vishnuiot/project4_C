#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    double x,y,z,result;
    printf("Bitte x,y und z eingeben \n");
    scanf("%lf %lf %lf",&x,&y,&z);
    result=(x>y)?(x>z?x:z):(y>z?y:z);
    printf("The largest number is = %lf \n",result);

}