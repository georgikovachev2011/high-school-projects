#include <stdio.h>
#include <string.h>

int count(char *s1, char *s2)
{
    int i, j;
    int occurrences = 0;

    for (i = 0; s1[i] != '\0'; i++)
    {
        j = 0;

        while (s2[j] != '\0' && s1[i + j] == s2[j])
        {
            j++;
        }

        if (s2[j] == '\0')
        {
            occurrences++;
        }
    }

    return occurrences;
}

int main()
{
    char s1[100];
    char s2[100];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    printf("Number of occurrences: %d\n", count(s1, s2));

    return 0;
}