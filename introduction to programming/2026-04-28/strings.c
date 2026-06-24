#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];   // bigger buffer to reduce overflow risk
    char s1[50];
    char s2[50];
    char *p;
    int l1, l2;

    printf("s=");
    fgets(s, sizeof(s), stdin);
    if ((p = strchr(s, '\n'))) *p = '\0';

    printf("s1=");
    fgets(s1, sizeof(s1), stdin);
    if ((p = strchr(s1, '\n'))) *p = '\0';

    printf("s2=");
    fgets(s2, sizeof(s2), stdin);
    if ((p = strchr(s2, '\n'))) *p = '\0';

    l1 = strlen(s1);
    l2 = strlen(s2);

    if (l1 == 0) {
        printf("\ns=%s\n", s);
        return 0;
    }

    p = s;
    while ((p = strstr(p, s1)) != NULL)
    {
        // Check if replacement would overflow buffer
        if (strlen(s) - l1 + l2 >= sizeof(s)) {
            printf("\nError: result too long!\n");
            return 1;
        }

        memmove(p + l2, p + l1, strlen(p + l1) + 1);
        memcpy(p, s2, l2);

        p += l2; // move forward to avoid infinite loops
    }

    printf("\ns=%s\n", s);

    return 0;
}