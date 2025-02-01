#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 20


struct item
{
int productno;
char productname[10];
int quantity;
float price;
};

void create()
{
    struct item a[LEN];

    int i,recd;
    FILE *fp;
    fp=fopen("Records.txt","w");

    if(fp!=NULL)
    {
        fprintf(fp,"Product Number\t\tProduct Name\t\tQuantity\t\tPrice\n"
                "--------------------------------------------------------------------------------\n");
        printf("\nEnter the Number of Records: ");
        scanf("%d",&recd);
        printf("--------------------------------");


        for(i=0;i<recd;i++)
       {
        printf("\nEnter Product Code %d :",i+1);
        scanf("%d",&a[i].productno);
        printf("\nEnter Product Name:");
        scanf("%s",a[i].productname);
        printf("\nEnter Quantity:");
        scanf("%d",&a[i].quantity);
        printf("\nEnter Price: Rs. ");
        scanf("%f",&a[i].price);
        fprintf(fp,"%d\t\t\t%s\t\t\t%d\t\t\t%.2f\n",a[i].productno,a[i].productname,a[i].quantity,a[i].price);
        printf("--------------------------------");

       }

        fclose(fp);
        printf("\n%d Records are created\n",recd);
    }
    else
    {
        printf("Unable to Open File\n");
    }

}
