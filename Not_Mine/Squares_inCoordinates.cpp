#include <stdio.h>
struct Vertex
{
    int x, y;
};
void CombiPossible(int arr[], int data[], int start, int end, int index, int r, int allCombinations[]);
int CheckSquare(Vertex p1, Vertex p2, Vertex p3, Vertex p4);
int DistVetrices(Vertex p, Vertex q);
int GetNcR(int n, int r);
int factorial(int num);
int main()
{
    int chkSquare, i, n, j, k, temp, r = 4, l, count = 0;
    char c;
    printf("Enter number of vertices\n");
    scanf("%d", &n);
    Vertex p[n];
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Vertices of %d in (x y) form\n", i);
        scanf("%d%c%d", &p[i].x, &c, &p[i].y);
        arr[i] = i;
    }
    int data[r];
    int ncr = GetNcR(n, r);
    int allCombinations[ncr * 4];
    CombiPossible(arr, data, 0, n - 1, 0, r, allCombinations);
    for (i = 0; i < ncr * 4; i += 4)
    {
        // printf("%d--->%d,%d,%d,%d\n",i,allCombinations[i],allCombinations[i+1],allCombinations[i+2],allCombinations[i+3]);
        int num[4] =
            {
                allCombinations[i], allCombinations[i + 1], allCombinations[i + 2], allCombinations[i + 3]};
        chkSquare = CheckSquare(p[num[0]], p[num[1]], p[num[2]], p[num[3]]);
        if (chkSquare == 1)
        {
            for (l = 0; l <= r - 1; l++)
                printf("(%d,%d), ", p[num[l]].x, p[num[l]].y);
            count++;
            printf("\n");
        }
    }
    printf("Total Squares Possibility=%d\n", count);
    return 0;
}
int CheckSquare(Vertex p1, Vertex p2, Vertex p3, Vertex p4)
{
    int d2 = DistVetrices(p1, p2);
    int d3 = DistVetrices(p1, p3);
    int d4 = DistVetrices(p1, p4);
    if (d2 == d3 && 2 * d2 == d4)
    {
        int flag = 0;
        int d = DistVetrices(p2, p4);
        if (d == DistVetrices(p3, p4) && d == d2)
        {
            flag = 1;
        }
        return (flag);
    }
    if (d3 == d4 && 2 * d3 == d2)
    {
        int flag = 0;
        int d = DistVetrices(p2, p3);
        if (d == DistVetrices(p2, p4) && d == d3)
            flag = 1;
        return (flag);
    }
    if (d2 == d4 && 2 * d2 == d3)
    {
        int flag = 0;
        int d = DistVetrices(p2, p3);
        if (d == DistVetrices(p3, p4) && d == d2)
            flag = 1;
        return (flag);
    }
    return (0);
}
int DistVetrices(Vertex p, Vertex q)
{
    return (p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y);
}
void CombiPossible(int arr[], int data[], int start, int end, int index, int r, int allCombinations[])
{
    static int x = 0;
    if (index == r)
    {
        for (int j = 0; j < r; j++)
        {
            allCombinations[x++] = data[j];
        }
        return;
    }
    for (int i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        CombiPossible(arr, data, i + 1, end, index + 1, r, allCombinations);
    }
}
int GetNcR(int n, int r)
{
    return ((float)factorial(n) / (factorial(r) * factorial(n - r)));
}
int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return (fact);
}
