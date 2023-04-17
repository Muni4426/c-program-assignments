#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll_no;
    char stud_name[50];
    float mark1, mark2, mark3;
    float total_marks;
    float avg_marks;
};

void calculate_total_marks(struct Student *stud) {
    stud->total_marks = stud->mark1 + stud->mark2 + stud->mark3;
}

void calculate_avg_marks(struct Student *stud) {
    stud->avg_marks = stud->total_marks / 3.0;
}

void sort_students(struct Student students[], int n) {
    int i, j;
    struct Student temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].total_marks < students[j + 1].total_marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Student Name: ");
        scanf("%s", students[i].stud_name);

        printf("Marks in Subject 1: ");
        scanf("%f", &students[i].mark1);

        printf("Marks in Subject 2: ");
        scanf("%f", &students[i].mark2);

        printf("Marks in Subject 3: ");
        scanf("%f", &students[i].mark3);

        calculate_total_marks(&students[i]);
        calculate_avg_marks(&students[i]);
    }

    sort_students(students, n);

    printf("\nStudent Details sorted by descending order of marks:\n\n");
    printf("Roll No\tStudent Name\tSubject 1\tSubject 2\tSubject 3\tTotal Marks\tAverage Marks\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",
            students[i].roll_no,
            students[i].stud_name,
            students[i].mark1,
            students[i].mark2,
            students[i].mark3,
            students[i].total_marks,
            students[i].avg_marks);
    }

    return 0;
}

