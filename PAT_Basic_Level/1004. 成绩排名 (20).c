#include <stdio.h>

struct Student{
    char name[11];
    char number[11];
    int score;
};

int main()
{
    int n, i, max, min;

    scanf("%d", &n);
    struct Student student[n];
    for(i=0; i<n; i++){
        scanf("%s %s %d", student[i].name, student[i].number, &student[i].score);
    }
    max = min = 0;
    for(i=0; i<n; i++){
        if(student[i].score > student[max].score)
            max = i;
        if(student[i].score < student[min].score)
            min = i;
    }

    printf("%s %s\n%s %s\n", student[max].name, student[max].number, student[min].name, student[min].number);
    return 0;
}
