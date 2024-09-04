#include <stdio.h>
void lists(int choice);
void coke(void);
void pepsi(void);
void fanta(void);

void lists(int choice) {
    switch (choice) {
        case 1:
            coke();
            break;
        case 2:
            pepsi();
            break;
        case 3:
            fanta();
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}

void coke() {
    int a;
    printf("1. Diet Coke\n2. Normal Coke\n");
    scanf("%d", &a);
    printf("Your item is here\n!!!!!!!!!\n");
}

void pepsi() {
    int a;
    printf("1. Diet Pepsi\n2. Normal Pepsi\n");
    scanf("%d", &a);
    printf("Your item is here\n!!!!!!!!!\n");
}

void fanta() {
    int b;
    printf("1. Green\n2. Orange\n");
    scanf("%d", &b);
    printf("Your item is here\n!!!!!!!!!\n");
}

int main() {
    int mon, cho;
    printf("Insert a 5 rupee coin\n");
    scanf("%d", &mon);
    if(mon!=5)
    {
        printf("please insert correct amount of money");
    }else
    {
    printf("Enter your choice\n1. Coke\n2. Pepsi\n3. Fanta\n");
    scanf("%d", &cho);
    lists(cho);
    }
    return 0;
}
