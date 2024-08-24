#include "swap.h"


int main() {

    // int a = 100;
    // int b = 200;
    //
    // swap(a, b);

    // int a = 10;
    // int *p = &a;
    //
    // cout << "a = " << a << endl;
    // cout << "&a = " << &a << endl;
    // cout << "p = " << p << endl;
    // cout << "*p = " << *p << endl;
    //
    // cout << *p << endl; //* 解引用
    // cout << sizeof(p) << endl;
    // cout << sizeof(char *) << endl;
    // cout << sizeof(float *) << endl;
    // cout << sizeof(double *) << endl;

    // int* p = (int*)0x1100;
    // cout << *p << endl;

    // int a = 10;
    // int b = 20;
    //
    // // 常量指针：const修饰指针，指针指向的值不能改，指针的指向可以改
    // const int* p1 = &a;
    // // *p1 = 100;
    // p1 = &b;
    // cout << *p1 << endl;
    //
    // // 指针常量：const修饰常量，指针指向的值可以改，指针的指向不可以改
    // int* const p2 = &a;
    // *p2 = 100;
    // // p2 = &b;
    // cout << *p2 << endl;
    //
    // // const既修饰指针又修饰常量
    // const int* const p3 = &a;
    // // *p3 = 100;
    // // p3 = &b;
    //

    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // int* p = arr;
    // for (int i = 0; i < 9; ++i) {
    //     cout << *p << "\t";
    //     cout << p << endl;
    //     p++;
    // }

    //
    // int a = 10;
    // int b = 20;
    //
    // swap(&a, &b);
    //
    // cout << a << endl;
    // cout << b << endl;


    // int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
    // int len = sizeof(arr) / sizeof(arr[0]);
    //
    // bubbleSort(arr, len);
    //
    // printArray(arr, len);

    // struct student stu = { "张三",18,100, };
    //
    // struct student * p = &stu;
    //
    // cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
    // cout << "姓名：" << (*p).name << " 年龄：" << (*p).age << " 分数：" << (*p).score << endl;

    // student stu = { "张三",18,10};
    // printStudent(stu);
    // cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
    //
    // cout << endl;
    //
    // //地址传递
    // printStudent(&stu);
    // cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age  << " 分数：" << stu.score << endl;


    struct hero arr[5] =
            {
                    {"刘备", 23, "男"},
                    {"关羽", 22, "男"},
                    {"张飞", 20, "男"},
                    {"赵云", 21, "男"},
                    {"貂蝉", 19, "女"},
            };
    int len = sizeof(arr) / sizeof(hero);

    bubbleSort(arr, len);
    printHeros(arr, len);


    return 0;
}