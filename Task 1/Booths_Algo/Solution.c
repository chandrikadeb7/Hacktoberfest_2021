#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void dtob(bool *arr, int, int);
void Complement(bool *arr, int, int);
void addBinary(bool *bin1, bool *bin2, int);
void arrprint(bool *arr, int);
bool asr(bool *a, bool *q, bool, int);
void boothsAlgorithm(bool *result, int, int, int);

int main()
{
    int multiplicand, multiplier, size = 8;
    printf("\nEnter multiplicand : ");
    scanf("%d", &multiplicand);
    printf("Enter multiplier   : ");
    scanf("%d", &multiplier);
    bool result[2 * size];
    boothsAlgorithm(&result[0], multiplicand, multiplier, size);
    printf("\n");
    int ans = 0, i;
    printf("Binary String : ");
    for (i = 0; i < 2 * size; i++)
    {
        printf("%d", result[i]);
        ans *= 2;
        ans += result[i];
    }
    if (result[0])
        ans -= (int)pow(2, 16);
    printf("\nFinal Answer : %d\n\n", ans);
    return 0;
}

void dtob(bool *arr, int num, int size)
{
    int i = size - 1;
    while (i >= 0)
    {
        arr[i] = num % 2;
        num /= 2;
        i--;
    }
}

void Complement(bool *arr, int num, int size)
{
    int total = pow(2, size);
    dtob(&arr[0], total - abs(num), size);
}

void addBinary(bool *bin1, bool *bin2, int size)
{
    int i = size - 1, carry = 0, s;
    while (i >= 0)
    {
        s = bin1[i] + bin2[i] + carry;
        bin1[i] = s % 2;
        carry = s / 2;
        i--;
    }
}

void arrprint(bool *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d", arr[i]);
}

bool asr(bool *a, bool *q, bool q1, int size)
{
    q1 = q[size - 1];
    int i = size - 1;
    while (i)
    {
        q[i] = q[i - 1];
        i--;
    }
    q[0] = a[size - 1];
    i = 7;
    while (i)
    {
        a[i] = a[i - 1];
        i--;
    }
    return q1;
}

void boothsAlgorithm(bool *result, int multiplicand, int multiplier, int size)
{
    bool m[size], q[size], mCompliment[size], a[size], q1 = 0;
    int count = 0;
    if (multiplicand >= 0)
    {
        dtob(&m[0], multiplicand, size);
        Complement(&mCompliment[0], multiplicand, size);
    }
    else
    {
        dtob(&mCompliment[0], multiplicand, size);
        Complement(&m[0], multiplicand, size);
    }
    if (multiplier >= 0)
        dtob(&q[0], multiplier, size);
    else
        Complement(&q[0], multiplier, size);
    while (count < 8)
    {
        if (q[7] ^ q1)
        {
            if (q[7])
                addBinary(&a[0], &mCompliment[0], size);
            else
                addBinary(&a[0], &m[0], size);
        }
        q1 = asr(&a[0], &q[0], q1, size);
        count++;
    }
    int i = 0;
    while (i < size)
    {
        result[i] = a[i];
        i++;
    }
    while (i < 2 * size)
    {
        result[i] = q[i - 8];
        i++;
    }
}
