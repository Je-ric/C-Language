#include <stdio.h>

#include <string.h>
main()
{
    char replaced[5000], plainText[5000];
    int flagOpenCircle = 0, flagLesser = 0, flagOpenBraces = 0, i = 0, j = 0;
    printf("Enter Plain C Code\n");
    gets(plainText);
    do
    {
        if (plainText[i] == '#' || plainText[i] == '<' || plainText[i] == '>' || plainText[i] == ';' || plainText[i] == '}' || plainText[i] == '{' || plainText[i] == '(' || plainText[i] == ')')
        {
            if (plainText[i] == '{')
                flagOpenBraces++;
            if (plainText[i] == '}')
                flagOpenBraces--;
            if (plainText[i] == '<' && flagOpenCircle == 0)
                flagLesser++;
            if (plainText[i] == '>' && flagOpenCircle == 0)
                flagLesser--;
            if (plainText[i] == '(')
            {
                flagLesser = 0;
                flagOpenCircle++;
            }
            if (plainText[i] == ')')
                flagOpenCircle--;
            if (flagOpenCircle > 0)
            {
                replaced[j++] = plainText[i];
            }
            else
            {
                if (plainText[i] == ')')
                    replaced[j++] = plainText[i];
 else if(
plainText[i]=='
{
' || plainText[i]=='
}
')
{
                    replaced[j++] = '\n';
                    replaced[j++] = plainText[i];
                    replaced[j++] = '\n';
 
}
 else if(
flagLesser>
0) replaced[j++]= plainText[i];
 else if(
plainText[i]=='
#')
{
                    replaced[j++] = '\n';
                    replaced[j++] = plainText[i];
 
}
 else
{
                    replaced[j++] = plainText[i];
                    replaced[j++] = '\n';
 
}
            }
        }
        else
        {
            replaced[j++] = plainText[i];
        }
        i++;

    } while (
        i < strlen(plainText));
    replaced[j] = '\0';
    printf(
        "Rearranged code\n\n");
    for (
        i = 0;
        i < strlen(replaced);
        i++)
        printf(
            "%c", replaced[i]);
    printf(
        "\n");
}
