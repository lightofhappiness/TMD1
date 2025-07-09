#include "header.h"
void hasil(int m, int z)
{

    int i, j;
    /*angka 1*/
    for (i = 0; i < 5 * m; i++)
    {
        if (z == 1)
        {
            for (j = 0; j < m; j++)
            {
                printf("$");
            }
        }
        else if (z == 2)
        {
            for (j = 0; j < 3 * m; j++)
            {
                if ((i > m - 1) && (i < 2 * m) && (j < m * 2))
                {
                    printf(" ");
                }
                else if ((i > m - 1) && (i < 3 * m) && (j < m))
                {
                    printf(" ");
                }
                else if ((i > (3 * m) - 1) && (i < 4 * m) && (j > m - 1))
                {
                    printf(" ");
                }
                else
                {
                    printf("$");
                }
            }
        }
        else if (z == 3)
        {
            for (j = 0; j < 3 * m; j++)
            {
                if ((i > m - 1) && (i < 2 * m) && (j < m * 2))
                {
                    printf(" ");
                }
                else if ((i > m - 1) && (i < 3 * m) && (j < m))
                {
                    printf(" ");
                }
                else if ((i > (3 * m) - 1) && (i < 4 * m) && (j < m * 2))
                {
                    printf(" ");
                }
                else
                {
                    printf("$");
                }
            }
        }
        /*huruf D*/
        for (j = 0; j < m; j++)
        {
            printf(" ");
        }

        for (j = 0; j < 3 * m; j++)
        {
            /*baris kurang dari m x 2*/
            if ((i < m * 2) && (j < m * 2))
            {
                printf(" ");
            }
            /*baris lebih dari m x 2 sampai m x 3*/
            else if ((i > m * 2 - 1) && (i < 3 * m) && (j < m))
            {
                printf(" ");
            }
            /*baris lebih dari m x 3 sampai m x 4*/
            else if ((i > 3 * m - 1) && (i < 4 * m) && (j < m * 2) && (j > m - 1))
            {
                printf(" ");
            }
            /*baris lebih dari m x 4 sampai m x 5*/
            else if ((i > 4 * m - 1) && (j < m))
            {
                printf(" ");
            }
            else
            {
                printf("D");
            }
        }
        /*spasi*/
        for (j = 0; j < m; j++)
        {
            printf(" ");
        }

        /*huruf i*/

        for (j = 0; j < m; j++)
        {
            if ((i > m) && (i < m * m))
            {
                printf(" ");
            }
            else
            {
                printf("D");
            }
        }
        /*spasi*/
        for (j = 0; j < m; j++)
        {
            printf(" ");
        }

        /*huruf G*/

        for (j = 0; j < m * 3; j++)
        {
            if ((i < m) && (j < m))
            {
                printf(" ");
            }
            else if ((i > m - 1) && (i < m * 2) && (j > m - 1))
            {
                printf(" ");
            }
            else if ((i > m * 2 - 1) && (i < m * 4) && (j > m - 1) && (j < m * 2))
            {
                printf(" ");
            }
            else if ((i > m * 4 - 1) && (j < m))
            {
                printf(" ");
            }
            else if ((i > m * 4 - 1) && (j > m * 2 - 1))
            {
                printf(" ");
            }
            else
            {
                printf("G");
            }
        }

        /*spasi*/
        for (j = 0; j < m; j++)
        {
            printf(" ");
        }

        /*huruf a*/
        if (z == 3)
        {
            for (j = 0; j < m * 3; j++)
            {
                if ((i < m * 2))
                {
                    printf(" ");
                }
                else if ((i > m - 1) && (i < m * 3) && (j < m))
                {
                    printf(" ");
                }
                else if ((i > m * 3 - 1) && (i < m * 4) && (j > m - 1) && (j < m * 2))
                {
                    printf(" ");
                }
                else if ((i > m * 4 - 1) && (j < m))
                {
                    printf(" ");
                }
                else
                {
                    printf("a");
                }
            }
        }
        else if (z == 1)
        {
            /*huruf c*/
            for (j = 0; j < m * 3; j++)
            {
                if ((i < m * 2))
                {
                    printf(" ");
                }
                else if ((i > m - 1) && (i < m * 3) && (j < m))
                {
                    printf(" ");
                }
                else if ((i > m * 3 - 1) && (i < m * 4) && (j > m - 1))
                {
                    printf(" ");
                }
                else if ((i > m * 4 - 1) && (j < m))
                {
                    printf(" ");
                }
                else
                {
                    printf("c");
                }
            }
        }
        else if (z == 2)
        {

            for (j = 0; j < 3 * m; j++)
            {
                /*baris kurang m x 2*/
                if ((i < m * 2) && (j > m - 1))
                {
                    printf(" ");
                }
                /*baris lebih dari m x 2 sampai m x 3*/
                else if ((i > m * 2 - 1) && (i < 3 * m) && (j > m * 2))
                {
                    printf(" ");
                }
                /*baris lebih dari m x 3 sampai m x 4*/
                else if ((i > 3 * m - 1) && (i < 4 * m) && (j < m * 2) && (j > m - 1))
                {
                    printf(" ");
                }
                /*baris lebih dari m x 4 sampai m x 5*/
                else if ((i > 4 * m - 1) && (j > 2 * m))
                {
                    printf(" ");
                }
                else
                {
                    printf("b");
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    int m = 2;
    int e = 1;
    int i, j;
    char y = 'c';

    /*print untuk jumlah digit penghaasilan dan huruf*/
    printf("%d diG %c\n", e, y);
    /*Tes*/
    printf("\n");

    satu(m, e);

    return 0;
}
#include "header.h" void satu(int m, int z)
{

    int i, j;
    /*angka 1*/
    for (i = 0; i < 5 * m; i++)
    {
        if (z == 1)
        {
            for (j = 0; j < m; j++)
            {
                printf("$");
            }
        }
        else if (z == 2)
        {
            for (j = 0; j < 3 * m; j++)
            {
                if ((i > m - 1) && (i < 2 * m) && (j < m * 2))
                {
                    printf(" ");
                }
                else if ((i > m - 1) && (i < 3 * m) && (j < m))
                {
                    printf(" ");
                }
                else if ((i > (3 * m) - 1) && (i < 4 * m) && (j > m - 1))
                {
                    printf(" ");
                }
                else
                {
                    printf("$");
                }
            }
        }
        else if (z == 3)
        {
            for (j = 0; j < 3 * m; j++)
            {
                if ((i > m - 1) && (i < 2 * m) && (j < m * 2))
                {
                    printf(" ");
                }
                else if ((i > m - 1) && (i < 3 * m) && (j < m))
                {
                    printf(" ");
                }
                else if ((i > (3 * m) - 1) && (i < 4 * m) && (j < m * 2))
                {
                    printf(" ");
                }
                else
                {
                    printf("$");
                }
            }
        }
        /*huruf D*/
        for (j = 0; j < m; j++)
        {
            printf(" ");
        }

        for (j = 0; j < 3 * m; j++)
        {
            /*baris kurang dari m x 2*/
            if ((i < m * 2) && (j < m * 2))
            {
                printf(" ");
            }
            /*baris lebih dari m x 2 sampai m x 3*/
            else if ((i > m * 2 - 1) && (i < 3 * m) && (j < m))
            {
                printf(" ");
            }
            /*baris lebih dari m x 3 sampai m x 4*/
            else if ((i > 3 * m - 1) && (i < 4 * m) && (j < m * 2) && (j > m - 1))
            {
                printf(" ");
            }
            /*baris lebih dari m x 4 sampai m x 5*/
            else if ((i > 4 * m - 1) && (j < m))
            {
                printf(" ");
            }
            else
            {
                printf("D");
            }
        }
        /*spasi*/
        for (j = 0; j < m; j++)
        {
            printf(" ");
        }

        /*huruf i*/

        for (j = 0; j < m; j++)
        {
            if ((i > m - 1) && (i < m * 2))
            {
                printf(" ");
            }
            else
            {
                printf("D");
            }
        }
        /*spasi*/
        for (j = 0; j < m; j++)
        {
            printf(" ");
        }

        /*huruf G*/

        for (j = 0; j < m * 3; j++)
        {
            if ((i < m) && (j < m))
            {
                printf(" ");
            }
            else if ((i > m - 1) && (i < m * 2) && (j > m - 1))
            {
                printf(" ");
            }
            else if ((i > m * 2 - 1) && (i < m * 4) && (j > m - 1) && (j < m * 2))
            {
                printf(" ");
            }
            else if ((i > m * 4 - 1) && (j < m))
            {
                printf(" ");
            }
            else if ((i > m * 4 - 1) && (j > m * 2 - 1))
            {
                printf(" ");
            }
            else
            {
                printf("G");
            }
        }

        /*spasi*/
        for (j = 0; j < m; j++)
        {
            printf(" ");
        }

        /*huruf a*/
        if (z == 3)
        {
            for (j = 0; j < m * 3; j++)
            {
                if ((i < m * 2))
                {
                    printf(" ");
                }
                else if ((i > m - 1) && (i < m * 3) && (j < m))
                {
                    printf(" ");
                }
                else if ((i > m * 3 - 1) && (i < m * 4) && (j > m - 1) && (j < m * 2))
                {
                    printf(" ");
                }
                else if ((i > m * 4 - 1) && (j < m))
                {
                    printf(" ");
                }
                else
                {
                    printf("a");
                }
            }
        }
        else if (z == 1)
        {
            /*huruf c*/
            for (j = 0; j < m * 3; j++)
            {
                if ((i < m * 2))
                {
                    printf(" ");
                }
                else if ((i > m - 1) && (i < m * 3) && (j < m))
                {
                    printf(" ");
                }
                else if ((i > m * 3 - 1) && (i < m * 4) && (j > m - 1))
                {
                    printf(" ");
                }
                else if ((i > m * 4 - 1) && (j < m))
                {
                    printf(" ");
                }
                else
                {
                    printf("c");
                }
            }
        }
        /*huruf b*/
        else if (z == 2)
        {

            for (j = 0; j < 3 * m; j++)
            {
                /*baris kurang m x 2*/
                if ((i < m * 2) && (j > m - 1))
                {
                    printf(" ");
                }
                /*baris lebih dari m x 2 sampai m x 3*/
                else if ((i > m * 2 - 1) && (i < 3 * m) && (j > m * 2))
                {
                    printf(" ");
                }
                /*baris lebih dari m x 3 sampai m x 4*/
                else if ((i > 3 * m - 1) && (i < 4 * m) && (j < m * 2) && (j > m - 1))
                {
                    printf(" ");
                }
                /*baris lebih dari m x 4 sampai m x 5*/
                else if ((i > 4 * m - 1) && (j > 2 * m))
                {
                    printf(" ");
                }
                else
                {
                    printf("b");
                }
            }
        }
        printf("\n");
    }
}