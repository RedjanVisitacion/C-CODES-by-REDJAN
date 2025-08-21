#include <stdio.h>
#include <conio.h>
#include <math.h>

#define p printf
#define s scanf
#define d double

d calculateWeightedAverage(d numbers[], d weights[], int size) {
    d sum = 0, weightSum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i] * weights[i];
        weightSum += weights[i];
    }
    return sum / weightSum;
}

d calculateCumulativeProduct(d numbers[], int size) {
    d product = 1;
    for (int i = 0; i < size; i++) {
        product *= numbers[i];
    }
    return product;
}

int main() {
    d numbers1[] = {3.5, 2.0, 5.6};
    d weights[] = {0.2, 0.3, 0.5};
    int size1 = sizeof(numbers1) / sizeof(numbers1[0]);
    d weightedAvg = calculateWeightedAverage(numbers1, weights, size1);
    d numbers2[] = {2, 3, 4, 5};
    int size2 = sizeof(numbers2) / sizeof(numbers2[0]);
    d cumulativeProduct = calculateCumulativeProduct(numbers2, size2);
    d x = 30;
    d sineValue = sin(x * M_PI / 180);
    d rivenNumber = 2.5;
    d powerUsingSine = pow(sin(rivenNumber), 2);
    d num1 = 4.0, num2 = 7.5;
    d sumOfProducts = num1 * num2;
    
    clrscr();
    p("Weighted average: %.2lf\n", weightedAvg);
    p("Cumulative product: %.2lf\n", cumulativeProduct);
    p("Sine of %.2lf degrees: %.4lf\n", x, sineValue);
    p("Power of a Riven number using sine function: %.4lf\n", powerUsingSine);
    p("Sum of the product of %.2lf and %.2lf: %.2lf\n", num1, num2, sumOfProducts);

    getch();
    return 0;
}