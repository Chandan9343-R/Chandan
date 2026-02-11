#include <stdio.h>
struct student {
int id;
char name[20];
float marks ;

};
int main(){
    float average;

struct student s1 ={101,"Chandan",89.5};
struct student s2={132,"adithya",99.99};
 average=(s1.marks+s2.marks)/2;
printf("Name :%s\n",s1.name);
printf("Marks:%.2f\n",s1.marks);

printf("Name :%s\n",s2.name);
printf("Marks:%.2f\n",s2.marks);

printf("Average:%.2f",average);

return 0;
}

