#include <stdio.h>

struct triad {
    int num1;
    int num2;
    int num3;
};

int find_biggest(int a, int b, int c) {
    return (a >= b ? (a >= c ? a : c) : (b >= c ? b: c));
}

int main(void) {
    printf("Enter Three numbers: ");
    struct triad nums;
    scanf("%d%d%d", &nums.num1, &nums.num2, &nums.num3);
    printf("Biggest number entered is %d\n",find_biggest(nums.num1, nums.num2, nums.num3));
}