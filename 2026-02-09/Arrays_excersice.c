


#include <stdio.h>
#include <stdlib.h>
#define max_students 30
#define min_students 1
#define min_score 2
#define max_score 6

int main() {
   int students;

   do {
      printf("\nEnter number of students: ");
      scanf("%d", &students);
   }while (students < min_students || students > max_students);

   float score;
   int sum = 0;

   for (int count = 0; count < students; count++) {
      do {
         printf("\nEnter %d student's score: ", count+1);
         scanf("%f", &score);
      }while (score < min_score || score > max_score);

      sum += score;
   }

   float average = (float) sum / students;

   printf("\nAverage: %.2f", average);

   return EXIT_SUCCESS;
}


