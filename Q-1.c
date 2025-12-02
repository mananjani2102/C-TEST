#include<stdio.h>
int main(){
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int sum = 0;
    for (int j = 0; j < 3; ++j) {
        sum += mat[1][j]; 
    }
    printf("%d\n", sum);
    return 0;
}