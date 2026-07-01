#include <stdio.h>

int main(){

    int gradeCount = 0, gradeA = 0, gradeB = 0;
    double grade = 0, gradeSum = 0;

    while(scanf("%lf", &grade) && grade != -1){

        gradeCount++;
        gradeSum += grade;

        if(grade >= 5){
            gradeA++;
        }else{
            gradeB++;
        }
    }

    double highGradePercent = (gradeA * 100.00) / gradeCount;

    double media = gradeSum / gradeCount;

    printf("%d\n", gradeB);
    printf("%d\n", gradeA);
    printf("%.2f\n", media);
    printf("%.1f%%\n", highGradePercent);

    return 0;
}
