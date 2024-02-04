int EvenFactorial(int ino) {
    int icnt = 0;
    int evenFactorCount = 0;  // Initialize a count for even factors

    if (ino < 0) {
        ino = -ino;
    }

    for (icnt = 1; icnt <= ino; icnt++) {
        if (ino % icnt == 0 && icnt % 2 == 0) {
            printf("%d\n", icnt);
            evenFactorCount++;
        }
    }

    return evenFactorCount;  // Return the count of even factors
}

int main() {
    int ivalue = 0;
    int iret = 0;

    printf("Please enter a number: ");
    scanf("%d", &ivalue);

    iret = EvenFactorial(ivalue);

    printf("The count of even factors of the entered number is: %d", iret);

    return 0;
}