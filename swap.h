#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/**
 * 学生结构体
 */
struct student {
    //成员列表
    string name;  //姓名
    int age;      //年龄
    int score;    //分数
};


struct hero {
    string name;
    int age;
    string sex;

};

struct Student {
    string name;
    int score;
};
struct Teacher {
    string name;
    Student sArray[5];
};

/**
 * 数值交换
 * @param a
 * @param b
 */
void swap(int a, int b);

/**
 * 地址传递
 * @param a
 * @param b
 */
void swap(int *a, int *b);

/**
 * 冒泡排序
 * @param arr
 * @param len
 */
void bubbleSort(int *arr, int len);

/**
 * 打印数组
 * @param arr
 * @param len
 */
void printArray(int *arr, int len);


/**
 * 值传递结构体
 * @param stu
 */
void printStudent(student stu);


/**
 * 地址传递结构体
 * @param stu
 */
void printStudent(student *stu);


/**
 * 结构体数组冒泡排序
 * @param arr
 * @param len
 */
void bubbleSort(hero arr[], int len);


/**
 * 打印数组
 * @param arr
 * @param len
 */
void printHeros(hero arr[], int len);


/**
 * 向老师结构体数组中赋值
 * @param tArr
 * @param len
 */
void allocateSpace(Teacher tArr[], int len);


/**
 * 打印老师结构体数组
 * @param tArr
 * @param len
 */
void printTeacher(Teacher tArr[], int len);