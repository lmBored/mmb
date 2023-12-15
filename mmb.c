#include <stdio.h>

int main()
{
    int r = 0, spacecnt = 0, quote = 0;
    char c = 10;
    while (1)
    {
        if (r == EOF)
        {
            break;
        }
        r = scanf("%c", &c);
        while (c == ' ')
        {
            scanf("%c", &c);
            spacecnt++;
        }
        if (c == '/')
        {
            scanf("%c", &c);
            if (c == '/')
            {
                while (c != 10)
                {
                    scanf("%c", &c);
                }
            }
            else if (c == '*')
            {
                scanf("%c", &c);
                while (c != '*')
                {
                    scanf("%c", &c);
                }
                while (c != '/')
                {
                    scanf("%c", &c);
                }
                scanf("%c", &c);
            }
            else
            {
                printf("/");
            }
        }
        if (spacecnt == 1)
        {
            printf(" ");
        }
        spacecnt = 0;
        if (quote == 0)
        {
            if (c == '>')
            {
                printf(">\n");
            }
            else if (c == ';')
            {
                printf("; ");
            }
            else if (c != 10 && c != 32)
            {
                printf("%c", c);
            }
            if (c == 39 || c == 34)
            {
                quote = 1;
            }
        }
        else if (quote == 1)
        {
            printf("%c", c);
            if (c == 39 || c == 34)
            {
                quote = 0;
            }
        }
    }
    return 0;
}

