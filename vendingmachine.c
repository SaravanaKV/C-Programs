#include <stdio.h>

int main()
{
    char c;
    int n;
    printf("Coffee\n\t1.CoffeeEspresso\n\t2.CoffeeCappuccinoCoffee\n\t3.Latte Coffee\nTea\n\t1.PlainTea\n\t2.AssamTea\nSoups\n\t1.HotSour Soup\n\t2.Veg Corn Soup\nBeverages\n\t1.Hot Chocolate Drink\n\t2.Badam Drink\n");
    scanf("%c",&c);
    scanf("%d",&n);
    printf("Welcome to CCD!\n");
    
    if(c=='C'){
        switch(n){
            case 1:
            printf("Enjoy your CoffeeEspresso");
            break;
            case 2:
            printf("Enjoy your CoffeeCappuccinoCoffee");
            break;
            case 3:
            printf("Enjoy your Latte Coffee");
            break;
            default:
            printf("Invalid");
        }
    }
    else if(c=='T'){
        switch(n){
            case 1:
            printf("Enjoy your PlainTea");
            break;
            case 2:
            printf("Enjoy your AssamTea");
            break;
            default:
            printf("Invalid");
        }
    }
    else if(c=='S'){
        switch(n){
            case 1:
            printf("Enjoy your HotSour Soup");
            break;
            case 2:
            printf("Enjoy your Veg Corn Soup");
            break;
            default:
            printf("Invalid");
        }
    }
    else if(c=='V'){
        switch(n){
            case 1:
            printf("Enjoy your Hot Chocolate Drink");
            break;
            case 2:
            printf("Enjoy your Badam Drink");
            break;
            default:
            printf("Invalid");
        }
    }
    else
    printf("Invalid");
    return 0;
}
