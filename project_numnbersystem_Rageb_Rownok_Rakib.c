// project by Rageb Rownok Rakib
#include <stdio.h>
#include <math.h>
#include <string.h>

long int Binary_to_Decimal(long int);
long int Binary_to_Octal(long int);
long int Binary_to_Hexadecimal(long int);
long int Decimal_to_Binary(long int);
long int Decimal_to_Octal(long int);
long int Decimal_to_Hexadecimal(long int);
long int Octal_to_Binary(long int);
long int Octal_to_Decimal(long int);
long int Octal_to_Hexadecimal(long int);
void Hexadecimal_to_Binary(char[]);
void Hexadecimal_to_Decimal(char[]);
void Hexadecimal_to_Octal(char[]);

int main()
{
    int digit, remainder, temp, i;
    char hexa[100];
    long int bin, dec, oct;
    printf("\n****NUMBER SYSTEM CONVERSION****\n");
Z:
    printf("\nBinary Conversion");
    printf("\n1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");
    printf("\nDecimal Conversion\n");
    printf("\n4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");
    printf("\nOctal Conversion\n");
    printf("\n7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");
    printf("\nHexa-Decimal Conversion\n");
    printf("\n10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");//rageb rownok
    printf("\nEnter your choice : ");
    scanf("%d", &digit);
    switch (digit)
    {
    case 1:
        printf("\n BINARY TO DECIMAL\n");
    A:
        printf("Enter any binary number : ");
        scanf("%ld", &bin);
        temp = bin;
        while (temp != 0)
        {
            remainder = temp % 10;
            if (remainder > 1)
            {
                printf("\n%ld is not a BINARY NUMBER\n", bin);
                printf("Try Again\n");
                goto A;
            }
            else
                temp = temp / 10;
        }
        Binary_to_Decimal(bin);
        goto X;
        break;
    case 2:
        printf("\n BINARY TO OCTAL\n");
    B:
        printf("Enter any binary number : ");
        scanf("%ld", &bin);
        temp = bin;
        while (temp != 0)
        {
            remainder = temp % 10;
            if (remainder > 1)
            {
                printf("\n%ld is not a BINARY NUMBER\n", bin);
                printf("Try Again\n");
                goto B;
            }
            else

                temp = temp / 10;
        }
        Binary_to_Octal(bin);
        goto X;
        break;
    case 3:
        printf("\n BINARY TO HEXA-DECIMAL\n");
    C:
        printf("Enter any binary number : ");
        scanf("%ld", &bin);
        temp = bin;
        while (temp != 0)
        {
            remainder = temp % 10;
            if (remainder > 1)
            {
                printf("\n%ld is not a BINARY NUMBER\n", bin);
                printf("Try Again\n");
                goto C;
            }
            else

                temp = temp / 10;
        }
        Binary_to_Hexadecimal(bin);
        goto X;
        break;
    case 4:
        printf("\n DECIMAL TO BINARY \n");
        printf("Enter any decimal number : ");
        scanf("%ld", &dec);
        Decimal_to_Binary(dec);
        goto X;
        break;
    case 5:
        printf("\n DECIMAL TO OCTAL \n");
        printf("Enter any decimal number : ");
        scanf("%ld", &dec);
        Decimal_to_Octal(dec);
        goto X;
        break;
    case 6:
        printf("\n DECIMAL TO HEXA-DECIMAL \n");
        printf("Enter any decimal number : ");
        scanf("%ld", &dec);
        Decimal_to_Hexadecimal(dec);
        goto X;
        break;
    case 7:
        printf("\n OCTAL TO BINARY \n");
    G:
        printf("Enter any octal number : ");
        scanf("%ld", &oct);
        temp = oct;
        while (temp != 0)
        {
            remainder = temp % 10;
            if (remainder > 7)
            {
                printf("\n%ld is not a OCTAL NUMBER\n", oct);
                printf("Try Again\n");
                goto G;
            }
            else

                temp = temp / 10;
        }
        Octal_to_Binary(oct);
        goto X;
        break;
    case 8:
        printf("\n Octal TO DECIMAL\n");
    H:
        printf("Enter any octal number : ");
        scanf("%ld", &oct);
        temp = oct;
        while (temp != 0)
        {
            remainder = temp % 10;
            if (remainder > 7)
            {
                printf("\n%ld is not a OCTAL NUMBER\n", oct);
                printf("Try Again\n");
                goto H;
            }
            else

                temp = temp / 10;
        }
        Octal_to_Decimal(oct);
        goto X;
        break;
    case 9:
        printf("\n Octal TO HEXA-DECIAML\n");
    I:
        printf("Enter any octal number : ");
        scanf("%ld", &oct);
        temp = oct;
        while (temp != 0)
        {
            remainder = temp % 10;
            if (remainder > 7)
            {
                printf("\n%ld is not a OCTAL NUMBER\n", oct);
                printf("Try Again\n");
                goto I;
            }
            else

                temp = temp / 10;
        }

        Octal_to_Hexadecimal(oct);
        goto X;
        break;

    case 10:
        printf("\n HEXA-DECIMAL TO BINARY \n");
    J:
        printf("Enter any hexa-decimal number : ");
        scanf("%s", hexa);
        for (i = 0; i < strlen(hexa); i++)
        {
            if (hexa[i] > 'f' && hexa[i] <= 'z' || hexa[i] > 'F' && hexa[i] <= 'Z')
            {
                printf("%s is not a hexadecimal number\n***Please try again***\n");
                goto J;
            }
        }
        Hexadecimal_to_Binary(hexa);
        goto X;
        break;

    case 11:
        printf("\n HEXA-DECIMAL TO DECIMAL \n");
    K:
        printf("Enter any hexa-decimal number : ");
        scanf("%s", hexa);
        for (i = 0; i < strlen(hexa); i++)
        {
            if (hexa[i] > 'f' && hexa[i] <= 'z' || hexa[i] > 'F' && hexa[i] <= 'Z')
            {
                printf("%s is not a hexadecimal number\n***Please try again***\n");
                goto K;
            }
        }
        Hexadecimal_to_Decimal(hexa);
        goto X;
        break;

    case 12:
        printf("\n HEXA-DECIMAL TO OCTAL \n");
    L:
        printf("Enter any hexa-decimal number : ");
        scanf("%s", hexa);
        for (i = 0; i < strlen(hexa); i++)
        {
            if (hexa[i] > 'f' && hexa[i] <= 'z' || hexa[i] > 'F' && hexa[i] <= 'Z')
            {
                printf("%s is not a hexadecimal number\n***Please try again***\n");
                goto L;
            }
        }
        Hexadecimal_to_Octal(hexa);
        goto X;
        break;
    default:
        printf("\n***INVALID NUMBER***\n");
    }
X:
    printf("\n\nDO YOU WANT TO CONTINUE  \n1. Yes\n2. No \n");
    scanf("%d", &temp);
    if (temp == 1)
    {
        goto Z;
    }
    else if (temp == 2)
    {
        printf("\n\nDo you want to see the project creator? \n1. Yes\n2. No\n");
        scanf("%d", &temp);
        if (temp == 1)
        {
            goto Y;
        }
    }
Y:
    printf("\n\n Project Creator\nMd Rageb Rownok\nDepartment of CSE\nDaffodil International University\n");
}

long int Binary_to_Decimal(long int bin)
{
    int temp, remainder, x = 0, sum = 0;
    temp = bin;
    while (temp != 0)
    {
        remainder = temp % 10;
        temp = temp / 10;
        sum += remainder * pow(2, x);
        x++;
    }
    printf("\nEquivalent Decimal NUMBER : %d", sum);
    return 0;
}
long int Binary_to_Octal(long int bin)
{
    int remainder, sum = 0, convt_number = 0, power = 1, x = 0;
    while (bin != 0)
    {
        remainder = bin % 10;
        bin = bin / 10;
        sum += remainder * pow(2, x);
        x++;
    }
    while (sum != 0)
    {
        remainder = sum % 8;
        sum = sum / 8;
        convt_number += (remainder * power);
        power = power * 10;
    }
    printf("\nEquivalent Octal Number : %d", convt_number);
}
long int Binary_to_Hexadecimal(long int bin)
{
    int remainder, sum = 0, x = 0, power = 1, i, temp;
    char hexa[100];
    temp = bin;
    while (temp != 0)
    {
        remainder = temp % 10;
        temp = temp / 10;
        sum = sum + remainder * pow(2, x);
        x++;
    }

    while (sum != 0)
    {
        remainder = sum % 16;
        if (remainder < 10)
        {
            remainder += 48;
        }
        else
        {
            remainder = remainder + 55;
        }
        hexa[power++] = remainder;
        sum = sum / 16;
    }
    for (i = power - 1; i > 0; i--)
    {
        printf("Hexadecimal equivalent  is: %c", hexa[i]);
    }
}
long int Decimal_to_Binary(long int dec)
{
    int temp, remainder, convt_number = 0, power = 1;
    temp = dec;
    while (temp != 0)
    {
        remainder = temp % 2;
        temp = temp / 2;
        convt_number += (remainder * power);
        power = power * 10;
    }
    printf("Equivilent Binary number %d\n", convt_number);
}
long int Decimal_to_Octal(long int dec)
{
    int temp, remainder, convt_number = 0, power = 1;
    temp = dec;
    while (temp != 0)
    {
        remainder = temp % 8;
        temp = temp / 8;
        convt_number += (remainder * power);
        power = power * 10;
    }
    printf("\nEquivilent Octal Number %d\n", convt_number);
}
long int Decimal_to_Hexadecimal(long int dec)
{
    int temp, remainder, power = 1, i;
    char hexa[100];
    temp = dec;
    while (temp != 0)
    {
        remainder = temp % 16;
        if (remainder < 10)
        {
            remainder += 48;
        }
        else
        {
            remainder += 55;
        }
        hexa[power++] = remainder;
        temp = temp / 16;
    }

    printf("Hexadecimal equivalent of %ld is: ", dec);

    for (i = power - 1; i > 0; i--)
    {
        printf("%c", hexa[i]);
    }
}
long int Octal_to_Binary(long int oct)
{
    int temp, remainder, power = 1, sum = 0, convt_number = 0, x = 0;
    temp = oct;
    while (temp != 0)
    {
        remainder = temp % 10;
        temp = temp / 10;
        sum += remainder * pow(8, x);
        x++;
    }

    while (sum != 0)
    {

        remainder = sum % 2;
        sum = sum / 2;
        convt_number += (remainder * power);
        power = power * 10;
    }
    printf("Equivilent Binary number %d\n", convt_number);
}
long int Octal_to_Decimal(long int oct)
{
    int temp, remainder, x = 0, sum = 0;
    temp = oct;
    while (temp != 0)
    {
        remainder = temp % 10;
        temp = temp / 10;
        sum += remainder * pow(8, x);
        x++;
    }
    printf("\nEquivalent Decimal NUMBER : %d", sum);
    return 0;
}
long int Octal_to_Hexadecimal(long int oct)
{
    int remainder, sum = 0, x = 0, power = 1, i;
    char hexa[100];
    while (oct != 0)
    {
        remainder = oct % 10;
        oct = oct / 10;
        sum += remainder * pow(8, x);
        x++;
    }

    while (sum != 0)
    {
        remainder = sum % 16;
        if (remainder < 10)
        {
            remainder += 48;
        }
        else
        {
            remainder += 55;
        }
        hexa[power++] = remainder;
        sum = sum / 16;
    }

    printf("Hexadecimal equivalent  is: ");

    for (i = power - 1; i > 0; i--)
    {
        printf("%c", hexa[i]);
    }
}
void Hexadecimal_to_Binary(char hexa[])
{
    int i = 0;
    printf("\nEquivalent Binary Number : ");
    for (i = 0; i < strlen(hexa); i++)
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;

        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
        }
    }
}
void Hexadecimal_to_Decimal(char hexa[])
{
    int i, number = 0, power = 0, remainder, temp, x = 0, sum = 0;
    for (i = strlen(hexa) - 1; i >= 0; i--)
    {
        /* if (i == 'a' || i == 'A')
         {
             number = 10;
         }
         else if (i == 'b' || i == 'B')
         {
             number = 11;
         }
         else if (i == 'c' || i == 'C')
         {
             number = 12;
         }
         else if (i == 'D' || i == 'd')
         {
             number = 13;
         }
         else if (i == 'E' || i == 'e')
         {
             number = 14;
         }
         else if (i == 'f' || i == 'F')
         {
             number = 15;
         }*/
        if (hexa[i] >= '0' && hexa[i] <= '9')
        {
            sum += (hexa[i] - 48) * pow(16, x);
            x++;
            ;
        }
        else if (hexa[i] >= 'A' && hexa[i] <= 'F')
        {
            sum += (hexa[i] - 55) * pow(16, x);
            x++;
        }
        else if (hexa[i] >= 'a' && hexa[i] <= 'f')
        {
            sum += (hexa[i] - 87) * pow(16, x);
            x++;
        }

        /*number += number;
        //temp = number;

            remainder = number % 10;
            number = number / 10;
            sum += remainder * pow(16, x);
            x++;*/
    }

    printf("\nEquivalent Decimal NUMBER : %d", sum);
    return 0;
}
void Hexadecimal_to_Octal(char hexa[])
{
    int i, convt_number = 0, power = 1, remainder, x = 0, sum = 0;
    for (i = strlen(hexa) - 1; i >= 0; i--)
    {
        if (hexa[i] >= '0' && hexa[i] <= '9')
        {
            sum += (hexa[i] - 48) * pow(16, x);
            x++;
            ;
        }
        else if (hexa[i] >= 'A' && hexa[i] <= 'F')
        {
            sum += (hexa[i] - 55) * pow(16, x);
            x++;
        }
        else if (hexa[i] >= 'a' && hexa[i] <= 'f')
        {
            sum += (hexa[i] - 87) * pow(16, x);
            x++;
        }
    }

    while (sum != 0)
    {
        remainder = sum % 8;
        sum = sum / 8;
        convt_number += (remainder * power);
        power = power * 10;
    }

    printf("\nEquivalent Decimal NUMBER : %d", convt_number);
    return 0;
}