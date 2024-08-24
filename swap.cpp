#include "swap.h"

/**
 * 数值交换
 * @param a
 * @param b
 */
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}


/**
 * 地址传递
 * @param a
 * @param b
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


/**
 * 冒泡排序
 * @param arr
 * @param len
 */
void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * 打印数组
 * @param arr
 * @param len
 */
void printArray(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << "\t";
    }
}


/**
 * 值传递结构体
 * @param stu
 */
void printStudent(student stu) {
    stu.score = 100;
    cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
}


/**
 * 地址传递结构体
 * @param stu
 */
void printStudent(student *stu) {
    stu->score = 59;
    cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;

}


/**
 * 结构体数组冒泡排序
 * @param arr
 * @param len
 */
void bubbleSort(hero arr[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[j].age > arr[j + 1].age) {
                hero temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


/**
 * 打印数组
 * @param arr
 * @param len
 */
void printHeros(hero arr[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << "姓名： " << arr[i].name << " 性别： " << arr[i].sex << " 年龄： " << arr[i].age << endl;
    }
}


/**
 * 向老师结构体数组中赋值
 * @param tArr
 * @param len
 */
void allocateSpace(Teacher tArr[], int len) {
    string tName = "teacher";
    string sName = "student";
    string nameSeed = "ABCDE";

    for (int i = 0; i < len; ++i) {
        tArr[i].name = tName + nameSeed[i];
        for (int j = 0; j < 5; ++j) {
            // 给当前老师的所有学生赋值
            tArr[i].sArray[j].name = sName + nameSeed[j];
            tArr[i].sArray[j].score = rand() % 61 + 40;
        }
    }
}


/**
 * 打印老师结构体数组
 * @param tArr
 * @param len
 */
void printTeacher(Teacher tArr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << tArr[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t姓名：" << tArr[i].sArray[j].name << " 分数：" << tArr[i].sArray[j].score << endl;
        }
    }
}