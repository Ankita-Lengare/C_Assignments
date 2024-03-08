// Problem-4: Subject marks and grade evaluation
#include<stdio.h>

int main(){

    int subjects[5];

    printf("Enter marks of all five subjects\n");
    for(int i=0; i<5; i++){
        printf("Enter marks of s%d : ", i+1);
        scanf("%d", &subjects[i]);
    }

    for(int i=0; i<5; i++){

        printf("\nMarks of s%d are %d \n", i+1, subjects[i]);

        if(subjects[i] >= 90){
            printf("Grade of s%d is %s \n", i+1, "Ex");
        }
        else if(subjects[i]<90 && subjects[i]>=80){
            printf("Grade of s%d is %c \n", i+1, 'A');
        }
        else if(subjects[i]<80 && subjects[i]>=70){
            printf("Grade of s%d is %c \n", i+1, 'B');
        }
        else if(subjects[i]<70 && subjects[i]>=60){
            printf("Grade of s%d is %c \n", i+1, 'C');
        }
        else{
            printf("Grade of s%d is %c \n", i+1, 'F');
        }
    }
}
