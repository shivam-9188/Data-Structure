#include <stdio.h>

int main() {
    char name[50];
    int subjects;
    float marks, total = 0, avg;

    printf("Enter student's name: ");
    scanf("%s", name);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for (int i = 1; i <= subjects; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &marks);
        total += marks;
    }

    avg = total / subjects;

    printf("\nStudent: %s\nAverage Marks: %.2f\n", name, avg);

    if (avg >= 90) printf("Performance: Excellent\n");
    else if (avg >= 75) printf("Performance: Good\n");
    else if (avg >= 50) printf("Performance: Average\n");
    else printf("Performance: Fail\n");

    return 0;
}



// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.