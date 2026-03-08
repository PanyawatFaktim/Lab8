#include <stdio.h>
void sort(int arr[], int size);

int main() {
    int score[4];
    int i;
    for(i=0;i<4;i++)
        scanf("%d",&score[i]);
    sort(score,4);
    printf("Top 3 scores: ");
    for(i=1;i<4;i++)
        printf("%d ",score[i]);
    return 0;
}
void sort(int arr[], int size) {
    int i,j,temp;
    for(i=0;i<size-1;i++) {
        for(j=0;j<size-1-i;j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
