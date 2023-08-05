#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() 
{
    int Letters,Numbers,Symbols;
    char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char numbers[] = "0123456789";
    char symbols[] = "!@#$%^&*()_+{}[]|:;<>,.?/";
    printf("Welcome to the password generator\n");
    
    printf("How many letters do you want in your password? ");
    scanf("%d", &Letters);
    
    printf("How many numbers do you want in your password? ");
    scanf("%d", &Numbers);
    
    printf("How many symbols do you want in your password? ");
    scanf("%d", &Symbols);
    
    srand(time(NULL));
    
    printf("This is your password as per your requirements:\n ");
    for (int i = 0; i < Letters; i++) 
    {
        printf("%c",letters[rand()%(sizeof(letters)-1)]);
    }
    for (int i = 0; i < Numbers; i++)
    {
        printf("%c",numbers[rand()%(sizeof(numbers)-1)]);
    }
    for (int i = 0; i < Symbols; i++) 
    {
        printf("%c",symbols[rand()%(sizeof(symbols)-1)]);
    }
    printf("\n");
}
