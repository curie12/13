#include <stdio.h>
#include <stdlib.h>

struct student{
    int ID;
    char name[10];
    double grade;
};

int main(void){
    struct student s = {0, NULL, 0};
    
    printf("Input the ID: ");
    scanf("%d", &s.ID);
    printf("Input the name: ");
    scanf("%s", s.name);
    printf("Input the grade: ");
    scanf("%lf", &s.grade);
    
    printf("ID: %d\n", s.ID);   
    printf("name: %s\n", s.name); 
    printf("grade: %lf\n", s.grade); 
    
    
  system("PAUSE");	
  return 0;
}
