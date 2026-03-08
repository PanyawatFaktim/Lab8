#include <stdio.h>

int findMax(int num[]);
void printAr(int myAr[], int n);
void addone(int number[], int add[], int sizeNum);
void addtwo(int number[], int pos[], int x, int sizePos);
void addthree(int number[], int pos[][2], int size);

int main() {
    int number[5] = {20,50,100,99,9};
    int numberSize = sizeof(number) / sizeof(number[0]);
    int add[5] = {2,4,6,8,10};
    int pos[] = {1,3};
    int posSize = sizeof(pos) / sizeof(pos[0]);
    int pos2d[][2] = {{0,3},{2,4}};
    int pos2dSize = sizeof(pos2d) / sizeof(pos2d[0]);
    int max;

    max = findMax(number);
    printAr(number, numberSize);
    addone(number, add, numberSize);
    printf("\n");
    addtwo(number, pos, 5, posSize);
    printf("\n");
    addthree(number, pos2d, pos2dSize);
    printf("\n");
    printf("Maximum of these number is %d\n", max);
    return 0;
}

int findMax(int num[]) {
    int maximum;
    int i;
    maximum = num[0];
    for(i = 1; i < 5; i++) {
        if(num[i] > maximum)
            maximum = num[i];
    }
    return maximum;
}

void printAr(int myAr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("number[%d] : %d\n", i, myAr[i]);
    }
}

void addone(int number[], int add[], int sizeNum) {
    int i;
    for(i = 0; i < sizeNum; i++) {
        number[i] += add[i];
        printf("%d ", number[i]);
    }
}

void addtwo(int number[], int pos[], int x, int sizePos) {
    int i;
    for(i = 0; i < sizePos; i++) {
        number[pos[i]] += x;
        printf("%d ", number[pos[i]]);
    }
}

void addthree(int number[], int pos[][2], int size) {
    int i;
    int index;
    int value;
    for(i = 0; i < size; i++) {
        index = pos[i][0];
        value = pos[i][1];
        number[index] += value;
        printf("index %d += %d -> %d\n", index, value, number[index]);
    }
}
