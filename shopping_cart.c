#include<stdio.h>
#include<string.h>
int main(){

    //SHOPPING CART PROGRAM

    char item[50]="";
    float price = 0.0f;
    int quantity = 0;
    // char currency = "$";
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item,sizeof(item),stdin);
    item [strlen(item) - 1] = '\0';

    printf("What is the price of each item?(in $): ");
    scanf("%f",&price);

    printf("How many would you like?: ");
    scanf("%d",&quantity);

    total = price*quantity;

    if(quantity == 1){
        printf("\nYou have bought %d %s",quantity, item);
    }
    else{
        printf("\nYou have bought %d %ss",quantity, item);
    }

    printf("\nCost will be: $%.2f",total);

getchar();
return 0;
}
