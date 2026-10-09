void fibo(int n) {
    int num1 = 0, num2 = 1, nextNum;
    printf("This function written by Pavana H");
    for (int i = 1; i <= n; i++) {
        printf("%d ", num1);
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
}
