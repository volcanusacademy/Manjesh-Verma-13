//  Write a program to enter three subject marks (out of 100). Check if student is pass or Fail,only if he/she scores greater than 75 in each subject and the average of all three subject marks should also be greater than 80.

#include <stdio.h>

int main() {
    // Declare variables to store subject marks
    int subject1, subject2, subject3;

    // Input marks for three subjects
    printf("Enter marks for Subject 1 (out of 100): ");
    scanf("%d", &subject1);
    
    printf("Enter marks for Subject 2 (out of 100): ");
    scanf("%d", &subject2);
    
    printf("Enter marks for Subject 3 (out of 100): ");
    scanf("%d", &subject3);

    // Check if the student has scored greater than 75 in each subject
    if (subject1 > 75 && subject2 > 75 && subject3 > 75) 
    {
        // Calculate the average of all three subject marks
        float average_marks = (subject1 + subject2 + subject3) / 3.0;

        // Check if the average is greater than 80
        if (average_marks > 80.0) 
        {
            printf("Congratulations! The student has passed with an average score greater than 80.\n");
        } 
        else 
        {
            printf("The student has scored greater than 75 in each subject, but the average is not greater than 80. The student has failed.\n");
        }
    } 
    else 
    {
        printf("The student has failed as they did not score greater than 75 in each subject.\n");
    }

    return 0;
}
