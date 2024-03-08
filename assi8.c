// Problem-8 : 

#include<stdio.h>

struct student{

    char name[20];
    char roll[5];
    int marks; 
};

void display(struct student st){

    printf("\nName of the student : %s", st.name);
    printf("\nRoll number : %s", st.roll);
    printf("\nTotal marks of the student : %d", st.marks);
}

int main()
{

    struct student s;
    
    printf("Enter name of the student: ");
    scanf("%s", &s.name);

    printf("Enter roll number of the student: ");
    scanf("%s", &s.roll);

    printf("Enter total marks of the student: ");
    scanf("%d", &s.marks);

    display(s);
    
}
