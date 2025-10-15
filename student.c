#include<stdio.h>
struct student{
    char name[50];
    int rollno;
};
int main(){
    struct student s1[5];
    for(int i=0;i<5;i++){
        printf("Enter your name:");
        scanf(" %s", s1[i].name);
        printf("Enter ROLL NO.:");
        scanf(" %d", &s1[i].rollno);
    }
    printf("---STUDENT DETAILS---\n");
    for(int i=0;i<5;i++){
        printf("Name:%s, Rollno: %d\n", s1[i].name,s1[i].rollno);
    }
    return 0;
}