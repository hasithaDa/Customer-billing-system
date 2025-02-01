#include<stdio.h>
#include<string.h>
#include<conio.h>

void create();
void display();
void bill();
void invoice();
void edit();


int main(){

    system("COLOR 9");
    printf("\t\t\t\t>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("\t\t\t\t\tWELCOME TO EGT DRESS POINT\n");
    printf("\t\t\t\t>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n\n");

    char file;
    char file1;
    char ofile;

    label:
    printf("\n\t\t\t\t---------------------------------------\n");
    printf("\t\t\t\t\t1. ADMINISTRATOR\n");
    printf("\t\t\t\t\t2. CUSTOMER\n");
    printf("\t\t\t\t\t3. EXIT\n");
    printf("\t\t\t\t---------------------------------------\n\n");

    printf("Select the option: ");
    scanf(" %c",&file);

    switch(file){
        case '1': printf("\n***You have selected to ADMINISTRATOR Option***\n\n");


                    int i=0;
                    char ch;
                    char pwd[30];
                    printf("Enter the password: ");
                    while((ch =_getch())!=13){
                        pwd[i] =ch;
                        i++;
                        printf("*");
                    }
                    pwd[i]='\0';
                    if(strcmp(pwd,"12345")==0){

                        printf("\n***Welcome. Log in successful***\n\n");
                        printf("-------------------\n");
                        printf("1. CREATE\n");
                        printf("2. DISPLAY\n");
                        printf("3. EDIT\n");
                        printf("-------------------\n\n");
                        printf("Select the option: ");
                        scanf(" %c",&file1);
                        switch(file1){
                            case '1': create();
                                      goto label;
                            case '2': display();
                                      goto label;
                            case '3': edit();
                                      goto label;
                        }
                    }

                    else{
                        printf("\n***Wrong Password***\n");
                    }


                       break;

        case '2': printf("\n***You have selected to CUSTOMER Option***\n\n");

                    printf("-------------------\n");
                    printf("1. BILL\n");
                    printf("2. INVOICE\n");
                    printf("-------------------\n\n");




                printf("Select the option: ");
                scanf(" %c",&ofile);
                switch(ofile){
                            case '1': bill();
                                      goto label;
                            case '2': invoice();
                                      break;
                        }

        default: printf("You have selected to EXIT Option");

                }



    return 0;
    }



