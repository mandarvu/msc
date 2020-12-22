#include <stdio.h>
#define MAX 30
#define STUDENTS 5

struct student {
  char name[MAX];
  int roll;
  int age;
};

int main() {
  struct student studs[3];
  for (int i = 0; i < 3; i++) {
    printf("\nEnter name, roll number and age ");
    scanf("%s%d%d", &studs[i].name, &studs[i].roll, &studs[i].age);
  }
  
  for (int i = 0; i < 3; i++) {
	  printf("name = %s\n",(studs+i)->name);
	  printf("roll number = %d\n", (studs+i)->roll);
	  printf("age = %d\n",(studs+i)->age);
  }
  return 0;
}
