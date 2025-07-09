int main()
{
    int m, n;
    long int e;
    int i, j;
    char s[50];
    work need[20];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", need[i].job);
        scanf("%ld", &need[i].sal);
        scanf("%d", &need[i].expe);
    }
    scanf("%s ", s);
    scanf("%d", &m);

    for (i = 0; i < n; i++)
    {
        if (strcmp(s, need[i].job) == 0)
        {
            e = need[i].sal;
        }
    }

    e = e / 1000;
    int k = e / 1000;

    int f = 0;
    if (k < 9)
    {
        f = 1;
    }
    else if ((k > 9) && (k < 99))
    {
        f = 2;
    }
    else if (k > 9)
    {
        f = 3;
    }

    char y;

    if (f == 1)
    {
        y = 'c';
    }
    else if (f == 2)
    {
        y = 'b';
    }
    else if (f == 3)
    {
        y = 'a';
    }
    /*print untuk jumlah digit penghaasilan dan huruf*/
    printf("%d diG %c\n", f, y);
    /*Tes*/
    printf("\n");
    satu(m, f);

    return 0;
}