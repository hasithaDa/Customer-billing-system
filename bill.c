#include<stdio.h>
#include <stdlib.h>
void bill()
{

    int i=1;
    int productNo,qty,opt;
    float price;
    float amount=0;
    float tamount,dis;
    FILE *product;
    product = fopen("productbill.txt","w");
    fprintf(product,"%s","Product NO \t Product Price \t Quantity \t Amount \t Discount \t Gross Amount \n");
    //fclose(product);
    //product = fopen("productbill.txt","a");
    printf("\nEnter the Product NO: ");
    scanf("%d",&productNo);
    printf("\nEnter the Price:Rs. ");
    scanf("%f",&price);
    printf("\nEnter the Quantity: ");
    scanf("%d",&qty);

    amount=price*qty;

    while(amount>8000 || amount<8000)
    {
        if (amount>8000)
        dis=amount*(10/100.0);

        else
        dis=0;
    tamount=amount-dis;
    printf("\nAmount: Rs.%.2f",amount);
    printf("\nDiscount: Rs.%.2f",dis);
    printf("\nGross Amount:Rs.%.2f",tamount);

    fprintf(product,"%d \t\t %f \t %d \t\t %f \t %f \t %f \t \n",productNo,price,qty,amount,dis,tamount);
    break ;
    }




     printf("\n");
     printf("****************************************************************************************************");
     puts(" ");
     printf("\nYou want to add product[1]"
          "\nYou want to delete the items[2]"
          "\nYou want to exit[3] ");

    printf("\n\nSelect the Option: ");
    scanf("%d",&opt);

    switch(opt){

    case 1: {


        while(productNo>0)
        {
            printf("\n--You have selected Option 1--");
            printf("\nEnter the Product NO(To ADD): ");
            scanf("%d",&productNo);
            if(productNo>0)
            {
                printf("\nEnter the Price:Rs. ");
                scanf("%f",&price);
                printf("\nEnter the Quantity: ");
                scanf("%d",&qty);
                amount=price*qty;
                tamount= tamount+amount;
                printf("\n===================================================================================================");
                printf("\nProduct NO         : %d",productNo);
                printf("\n\nProduct Price      :Rs.%.2f",price);
                printf("\n\nQuantity           : %d",qty);
                printf("\n\nAmount             :Rs.%.2f",amount);
                printf("\n\nDiscount           :Rs.%.2f",dis);
                printf("\n\nGross Amount       :Rs.%.2f",tamount);
                printf("\n===================================================================================================\n\n");


                fprintf(product,"%d \t\t %f \t %d \t\t %f \t %f \t %f \t \n",productNo,price,qty,amount,dis,tamount);
            }
        }
       //fclose(product);


     break;
    }
     case 2:{


        printf("Do you want to exit");
        scanf("%d",&i);
     break;
     }
     case 3:{
     printf("\n--You have selected Option 3--");
     printf("\n===================================================================================================");
     printf("\nProduct NO           : %d",productNo);
     printf("\n\nProduct Price        :Rs.%.2f",price);
     printf("\n\nQuantity             : %d",qty);
     printf("\n\nAmount               :Rs.%.2f",amount);
     printf("\n\nDiscount             :Rs.%.2f",dis);
     printf("\n\nGross Amount         :Rs.%.2f",tamount);
     printf("\n===================================================================================================");

     break;
     }

     default:printf("--You have selected Invalid Option--\n\n");


    }
    fclose(product);


}
