#include <stdio.h>
#include <string.h>
#include <time.h>

struct Student {
    char name[50];
    int roll_no;
    int birth_date;
    int birth_month;
    int birth_year;
    int admission_date;
    int admission_month;
    int admission_year;
};

int main() {
    struct Student student;
    int age_years, age_months, age_days;

    // Accept student details
    printf("Enter Name: ");
    scanf("%s", student.name);
    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_no);
    printf("Enter Birth Date (dd mm yyyy): ");
    scanf("%d %d %d", &student.birth_date, &student.birth_month, &student.birth_year);
    printf("Enter Admission Date (dd mm yyyy): ");
    scanf("%d %d %d", &student.admission_date, &student.admission_month, &student.admission_year);
    
    // Calculate age at time of admission
    time_t now = time(NULL);
    struct tm *local_time = localtime(&now);
    int current_year = local_time->tm_year + 1900;
    int current_month = local_time->tm_mon + 1;
    int current_date = local_time->tm_mday;

    age_years = current_year - student.birth_year - 1;
    age_months = 12 - student.birth_month + current_month;
    if (age_months >= 12) {
        age_years++;
        age_months -= 12;
    }

    age_days = 31 - student.birth_date + current_date;
    if (age_days >= 31) {
        age_months++;
        age_days -= 31;
    }

    // Display student details and age at time of admission
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Birth Date: %d/%d/%d\n", student.birth_date, student.birth_month, student.birth_year);
    printf("Admission Date: %d/%d/%d\n", student.admission_date, student.admission_month, student.admission_year);
    printf("Age at time of admission: %d years, %d months, %d days\n", age_years, age_months, age_days);
    
    return 0;
}

