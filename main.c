#include <stdio.h>

//保存点的坐标
struct Point{
    double x;
    double y;
    double z;
};

struct Student{
    char *name;
    int age;
    int *m;
    char sex;
    float salary;
    char address[30];
} stu[3], *p;

int main() {

    struct Point p1 = {100,100,0};
    struct Point p2;
    //指向结构体的指针
    struct Point *p3;

    p3 = &p2;
    (*p3).x = p1.x;
    (*p3).y = p1.y;
    (*p3).z = p1.z;

    //printf("p2 = (%7.2f %7.2f %7.2f)\n", p2.x, p2.y, p2.z);

    //指向结构体数组的指针
    p = stu;
    p->age = 10;
    printf("age=%d\n", p->age);
    printf("age=%d\n", stu[0].age);

    //两个都会使age+1，因为 -> 优先级高于 ++
    p->age++;
    printf("p->age++ = %d\n", p->age);

    ++p->age;
    printf("++p->age =%d\n", p->age);

    return 0;
}
