#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{
    if (argc !=4)
    {
        printf("Usage: ./trans number, system of calculation , transfer to the system of calculation \n");

        return 1;

    }
     unsigned long n = atol(argv[1]);
     int m = atoi(argv[2]);
     int k = atoi(argv[3]);

        if(m == 10 && k == 2)
        {
            char buf[81];

            int i = 0;

            while (n >= 1)
            {
                buf[sizeof(buf) - i - 2] = n % 2 + '0';
                n = n / 2;
                i++;
            }
            buf[sizeof(buf) - 1] = '\0';

            printf("%s\n", (buf + sizeof(buf) - i - 1));
        return 0;

        }
        else if(m == 2 && k == 10)
        {
            char* c = argv[1];
            int l = strlen(c); //длина двоичного числа

            int d = 0;

            for (int j = 0; j <= l-1 ; j++)
            {

               int digit = c[j]-'0';
               d += digit*pow(2,l-1-j);

            }
        printf("%d\n",d);
        }
    return 0;
}