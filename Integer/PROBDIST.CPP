#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

int main() {
    int i, j, count, frequency, max_freq;
    float input[MAX_SIZE], mean, median, mode, range, variance, std_deviation, sum = 0, sum_squares = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &count);

    printf("Enter %d elements:\n", count);
    for(i=0; i<count; i++) {
        scanf("%f", &input[i]);
        sum += input[i];
        sum_squares += input[i] * input[i];
    }

    // Calculate mean
    mean = sum / count;

    // Calculate median
    for(i=0; i<count; i++) {
        for(j=i+1; j<count; j++) {
            if(input[j] < input[i]) {
                float temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    if(count % 2 == 0)
        median = (input[(count/2)-1] + input[count/2]) / 2.0;
    else
        median = input[count/2];

    // Calculate mode
    mode = input[0];
    max_freq = 1;
    for(i=0; i<count; i++) {
        frequency = 1;
        for(j=i+1; j<count; j++) {
            if(input[j] == input[i])
                frequency++;
        }
        if(frequency > max_freq) {
            max_freq = frequency;
            mode = input[i];
        }
    }

    // Calculate range
    range = input[count-1] - input[0];

    // Calculate variance and standard deviation
    variance = (sum_squares - (sum*sum)/count) / (count-1);
    std_deviation = sqrt(variance);

    printf("Mean = %f\n", mean);
    printf("Median = %f\n", median);
    printf("Mode = %f\n", mode);
    printf("Range = %f\n", range);
    printf("Variance = %f\n", variance);
    printf("Standard Deviation = %f\n", std_deviation);

return 0;
}