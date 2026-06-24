// Enter data (3 integers - day month year). Find the previous and required information (day month year).



#include <stdio.h>
#include <stdlib.h>

int main() {
    int day;
    int month;
    int year;
    int poseday;
    

    do{
        printf("Enter day: ");
        scanf("%d", &day);
        printf("Enter month: ");
        scanf("%d", &month);
        printf("Enter year: ");
        scanf("%d", &year);

        int leap_year = 0;
        
        if (year % 4 == 0){
            if (year % 100 != 0 || year % 400 == 0){
                leap_year = 1;
            }
        }

        switch (month){
            case 1: case 3: case 5:
            case 7: case 8: case 10: 
            case 12: poseday = 31; break;
        
            case 4: case 6: 
            case 9: case 11:
            poseday = 30; break;
        
            case 2: poseday = 28 + leap_year; break;
            default: break;
        }
    } while(month < 1 || month > 12 || day < 1 || day > poseday || year < 0);

    int previous_day;
    int previous_month;
    int previous_year;

    if (day > 1){
        previous_day = day - 1;
        previous_month = month;
        previous_year = year;
    } else {
        if (month == 1){
            previous_month = 12;
            previous_year = year - 1;
        } else {
            previous_month = month - 1;
            previous_year = year;
        }
        switch (previous_month){
            case 1: case 3: case 5:
            case 7: case 8: case 10: 
            case 12: previous_day = 31; break;
        
            case 4: case 6: 
            case 9: case 11:
            previous_day = 30; break;
        
            case 2: 
                if ((previous_year % 4 == 0 && previous_year % 100 != 0) || (previous_year % 400 == 0)){
                    previous_day = 29;
                } else {
                    previous_day = 28;
                }
                break;
            }
    }
    int next_day;
    int next_month;
    int next_year;

    if (day < poseday){
        next_day = day + 1;
        next_month = month;
        next_year = year;
    } else {
        next_day = 1;
        if (month == 12){
            next_month = 1;
            next_year = year + 1;
        } else {
            next_month = month + 1;
            next_year = year;
        }
    }

    
    
    printf("Previous date: %d/%d/%d\n", previous_day, previous_month, previous_year);
    printf("Next date: %d/%d/%d\n", next_day, next_month, next_year);
    
    return EXIT_SUCCESS;
}
}













