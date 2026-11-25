#include <stdio.h>
#include <time.h>

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int days_in_month(int month, int year) {
    static const int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 1 && is_leap_year(year)) {
        return 29;
    }
    return days[month];
}

int get_start_weekday(int year, int month) {
    struct tm date = {0};
    date.tm_year = year - 1900;
    date.tm_mon = month;
    date.tm_mday = 1;
    date.tm_isdst = -1;

    if (mktime(&date) == -1) {
        return 0;
    }
    return date.tm_wday; /* 0 = Sun, 1 = Mon, ..., 6 = Sat */
}

void print_month_calendar(int year, int month) {
    static const char *months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int total_days = days_in_month(month, year);
    int start_day = get_start_weekday(year, month);

    printf("\n   ----------- %s %d -----------\n", months[month], year);
    printf("   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (int i = 0; i < start_day; i++) {
        printf("     ");
    }

    for (int day = 1; day <= total_days; day++) {
        printf("%5d", day);
        if ((start_day + day) % 7 == 0 || day == total_days) {
            printf("\n");
        }
    }
}

int main(void) {
    int year;

    printf("Enter the year: ");
    if (scanf("%d", &year) != 1 || year < 1) {
        fprintf(stderr, "Invalid year input.\n");
        return 1;
    }

    printf("\n======================================\n");
    printf("          CALENDAR FOR %d\n", year);
    printf("======================================\n");

    for (int month = 0; month < 12; month++) {
        print_month_calendar(year, month);
    }

    return 0;
}
