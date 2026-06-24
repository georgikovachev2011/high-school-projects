/*1. Да се състави програма, която въвежда два низа (s1 и s2) и намира колко пъти низ s2 се среща в s1 (дефинирайте функция, която да връща броя на срещанията на s2 в s1 );
  char * count(char *s1, char *s2);
2. Search & Replace.  Да се състави програма, която въвежда три низа (s1, s2 и s3) и навсякъде, където s2 се среща в s1,  заменя s2 с s3.  За целта дефинирайте функция:  
char*search_replace(char *s1, char *s2, char *s3);
*/

#include <stdio.h>
#include <string.h>

int count(const char *s1, const char *s2) {
    int count = 0;
    const char *ptr = s1;

    while ((ptr = strstr(ptr, s2)) != NULL) {
        count++;
        ptr += strlen(s2);
    }

    return count;
}

char* search_replace(const char *s1, const char *s2, const char *s3) {
    static char result[200]; 
    char *ptr = result;
    const char *current = s1;

    while (*current) {
        if (strstr(current, s2) == current) {
            strcpy(ptr, s3);
            ptr += strlen(s3);
            current += strlen(s2);
        } else {
            *ptr++ = *current++;
        }
    }
    *ptr = '\0'; 

    return result;
}

int main() {
    char s1[100], s2[50], s3[50];

    printf("Enter the main string (s1): ");
    fgets(s1, 100, stdin);
    s1[strcspn(s1, "\n")] = '\0'; 

    printf("Enter the substring to search for (s2): ");
    fgets(s2, 50, stdin);
    s2[strcspn(s2, "\n")] = '\0'; 

    printf("Enter the substring to replace with (s3): ");
    fgets(s3, 50, stdin);
    s3[strcspn(s3, "\n")] = '\0'; 

    int occurrences = count(s1, s2);
    printf("The substring '%s' occurs %d times in '%s'.\n", s2, occurrences, s1);

    char *replaced_string = search_replace(s1, s2, s3);
    printf("String after replacement: %s\n", replaced_string);

    return 0;
}

