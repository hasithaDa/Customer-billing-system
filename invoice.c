#include<stdio.h>
#include <stdlib.h>

void invoice()
{

    printf("\n\n\n");
    printf("\t\t\t\t>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<\n");
    printf("\t\t\t\t\tEGT DRESS POINT\n");
    printf("\t\t\t\t>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<\n");
    printf("\n");
    printf("\t\t\t\t\t  King street\n ");
    printf("\t\t\t\t\t     Matale\n");
    printf("\n");

    char line[100];
    FILE *pf;
    pf = fopen("productbill.txt","r");

    while(fgets(line,sizeof(line),pf))
{
        printf("%s",line);
}



    printf("\n");

    printf("\t\t\t\t     Thank you for Shopping");
    printf("\n");
    printf("\t\t\t\t\t   Visit Again");
    printf("\n");


}
