#include<stdio.h>
#include <stdlib.h>

void display()
{
  printf("\n");
  FILE *product;
  product=fopen("Records.txt","r");
  char line[50];


while(fgets(line,sizeof(line),product))
{
    printf("%s",line);

}
  printf("\n");
  fclose(product);
}

