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
    // cout << *p << endl; //* ������
    // cout << sizeof(p) << endl;
    // cout << sizeof(char *) << endl;
    // cout << sizeof(float *) << endl;
    // cout << sizeof(double *) << endl;

    // int* p = (int*)0x1100;
    // cout << *p << endl;

    // int a = 10;
    // int b = 20;
    //
    // // ����ָ�룺const����ָ�룬ָ��ָ���ֵ���ܸģ�ָ���ָ����Ը�
    // const int* p1 = &a;
    // // *p1 = 100;
    // p1 = &b;
    // cout << *p1 << endl;
    //
    // // ָ�볣����const���γ�����ָ��ָ���ֵ���Ըģ�ָ���ָ�򲻿��Ը�
    // int* const p2 = &a;
    // *p2 = 100;
    // // p2 = &b;
    // cout << *p2 << endl;
    //
    // // const������ָ�������γ���
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

    // struct student stu = { "����",18,100, };
    //
    // struct student * p = &stu;
    //
    // cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
    // cout << "������" << (*p).name << " ���䣺" << (*p).age << " ������" << (*p).score << endl;

    // student stu = { "����",18,10};
    // printStudent(stu);
    // cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
    //
    // cout << endl;
    //
    // //��ַ����
    // printStudent(&stu);
    // cout << "�������� ������" << stu.name << " ���䣺 " << stu.age  << " ������" << stu.score << endl;


    struct hero arr[5] =
            {
                    {"����", 23, "��"},
                    {"����", 22, "��"},
                    {"�ŷ�", 20, "��"},
                    {"����", 21, "��"},
                    {"����", 19, "Ů"},
            };
    int len = sizeof(arr) / sizeof(hero);

    bubbleSort(arr, len);
    printHeros(arr, len);


    return 0;
}