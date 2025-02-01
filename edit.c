#include <stdio.h>
#include <stdlib.h>

void edit()
{
    char str[100];
    char ch;
    int product_no;
    int line_no=97;

    FILE *fp1, *fp2;

    fp1=fopen("Records.txt","r");
    fp2=fopen("replica.txt","w");
    rewind(fp1);

    printf("\n\nEnter The Product No to be deleted :");
    scanf("%d",&product_no);
    printf("\n");


    while(fgets(str,sizeof(str),fp1) != NULL)
    {
        line_no++;
        if(line_no!=product_no)
        {
            fputs(str,fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    remove("Records.txt");
    rename("replica.txt","Records.txt");

    fp1=fopen("Records.txt","r");

    while((ch = fgetc(fp1)) != EOF)
    {
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp1);


}








