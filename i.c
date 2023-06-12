#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date d1, struct Date d2) {
    if (d1.year < d2.year) {
        return -1; 
    } else if (d1.year > d2.year) {
        return 1; 
    } else {
        if (d1.month < d2.month) {
            return -1; 
        } else if (d1.month > d2.month) {
            return 1; 
        } else {
            if (d1.day < d2.day) {
                return -1; 
            } else if (d1.day > d2.day) {
                return 1;  
            } else {
                return 0; 
            }
        }
    }
}

int main() {
    struct Date date1, date2;

    printf("Enter date 1 (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter date 2 (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int result = compareDates(date1, date2);

    if (result < 0) {
        printf("Date 1 is earlier than Date 2\n");
    } else if (result > 0) {
        printf("Date 1 is later than Date 2\n");
    } else {
        printf("Date 1 is equal to Date 2\n");
    }

    return 0;
}

