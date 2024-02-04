int main() {
    float totalMarks, obtainedMarks, percentage;

    // Prompt the user for input
    printf("Enter total marks: ");
    scanf("%f", &totalMarks);

    printf("Enter obtained marks: ");
    scanf("%f", &obtainedMarks);

    // Calculate the percentage
    percentage = (obtainedMarks / totalMarks) * 100;

    // Display the result
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}