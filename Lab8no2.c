#include <stdio.h>

int checkscore(char std[]);
char keys[10] = {'D','B','D','C','C','D','A','E','A','D'};

int main() {
    int i;
    int count;
    char ans[8][10] = {
        {'A','B','A','C','C','D','E','E','A','D'},
        {'D','B','A','B','C','A','E','E','A','D'},
        {'E','D','D','A','C','B','E','E','A','D'},
        {'C','B','A','E','D','C','E','E','A','D'},
        {'A','B','D','C','C','D','E','E','A','D'},
        {'B','B','E','C','C','D','E','E','A','D'},
        {'B','B','A','C','C','D','E','E','A','D'},
        {'E','B','E','C','C','D','E','E','A','D'}
    };
    for(i = 0; i < 8; i++) {
        printf("std %d => %d\n", (i+1), checkscore(ans[i]));
    }
    count = countNo1Correct(ans,8);
    printf("Number of students correct in question 1 = %d\n",count);
    return 0;
}
int checkscore(char std[]) {
    int score = 0;
    int i;
    for(i = 0; i < 10; i++) {
        if(std[i] == keys[i])
            score++;
    }
    return score;
}
int countNo1Correct(char ans[][10], int n) {

    int i;
    int count = 0;

    for(i = 0; i < n; i++) {
        if(ans[i][0] == keys[0])
            count++;
    }

    return count;
}
