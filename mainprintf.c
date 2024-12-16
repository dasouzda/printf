#include "ft_printf.h"

int main(void)
{
    // //Test avec %c
    // ft_printf("Character: %c\n", 'A');

    // //Test avec %s
    // ft_printf("String: %s\n", "Hello, world!");

    // //Test mixte
    // ft_printf("Mix: char = %c, string = %s\n", 'B', "Test");

    // //Test avec du texte seul
    // ft_printf("Just text without placeholders\n");

    // //Test vide
    // ft_printf("");

    //Test pointeur
    // int x = 42;
    // void *ptr = &x;

    // ft_printf("Adresse de x : %p\n", ptr);
    // ft_printf("Pointeur NULL : %p\n", NULL);
    // return 0;

    // //Test integer
    // int number1 = 42;
    // int number2 = -42;
    
    // // Test avec %d
    // printf("Test avec %%d :\n");
    // printf("Nombre positif : %d\n", number1);
    // printf("Nombre négatif : %d\n", number2);
    
    // // Test avec %i
    // printf("\nTest avec %%i :\n");
    // printf("Nombre positif : %i\n", number1);
    // printf("Nombre négatif : %i\n", number2);
    
    // return 0;

    //Test %u unsigned numbers
//     unsigned int num1 = 42;
//     unsigned int num2 = 123456;
//     unsigned int num3 = 0;

    
//     printf("Test avec %%u :\n");
//     printf("Nombre positif : %u\n", num1);
//     printf("Grand nombre : %u\n", num2);
//     printf("Zéro : %u\n", num3);

//     return 0;

    // //Test %%
    // ft_printf("Affichage du caractère %%\n");
    // ft_printf("Ceci est un test : %%\n");
    // ft_printf("%% est utilisé pour afficher un pourcentage.\n");

   // Test avec %x et  %X
    unsigned int num = 255;

    // Test avec %x
    printf("Test printf (minuscule) : %x\n", num);
    ft_printf("Test ft_printf (minuscule) : %x\n", num);

    // Test avec %X
    printf("Test printf (majuscule) : %X\n", num);
    ft_printf("Test ft_printf (majuscule) : %X\n", num);

    // Test avec un autre nombre
    num = 42;
    printf("Test printf (minuscule) : %x\n", num);
    ft_printf("Test ft_printf (minuscule) : %x\n", num);

    printf("Test printf (majuscule) : %X\n", num);
    ft_printf("Test ft_printf (majuscule) : %X\n", num);

    return 0;
}