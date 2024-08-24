#include "swap.h"

/**
 * ��ֵ����
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
 * ��ַ����
 * @param a
 * @param b
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


/**
 * ð������
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
 * ��ӡ����
 * @param arr
 * @param len
 */
void printArray(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << "\t";
    }
}


/**
 * ֵ���ݽṹ��
 * @param stu
 */
void printStudent(student stu) {
    stu.score = 100;
    cout << "�Ӻ����� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
}


/**
 * ��ַ���ݽṹ��
 * @param stu
 */
void printStudent(student *stu) {
    stu->score = 59;
    cout << "�Ӻ����� ������" << stu->name << " ���䣺 " << stu->age << " ������" << stu->score << endl;

}


/**
 * �ṹ������ð������
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
 * ��ӡ����
 * @param arr
 * @param len
 */
void printHeros(hero arr[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << "������ " << arr[i].name << " �Ա� " << arr[i].sex << " ���䣺 " << arr[i].age << endl;
    }
}


/**
 * ����ʦ�ṹ�������и�ֵ
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
            // ����ǰ��ʦ������ѧ����ֵ
            tArr[i].sArray[j].name = sName + nameSeed[j];
            tArr[i].sArray[j].score = rand() % 61 + 40;
        }
    }
}


/**
 * ��ӡ��ʦ�ṹ������
 * @param tArr
 * @param len
 */
void printTeacher(Teacher tArr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << tArr[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t������" << tArr[i].sArray[j].name << " ������" << tArr[i].sArray[j].score << endl;
        }
    }
}