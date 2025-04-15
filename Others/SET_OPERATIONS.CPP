#include<stdio.h>
#include<string.h>
#include<conio.h>
#define MAX 30

void create(int set[]);
void print(int set[]);
void Union(int setA[], int setB[], int resultSet[]);
void intersection(int setA[], int setB[], int resultSet[]);
void difference(int setA[], int setB[], int resultSet[]);
int member(int set[], int x);

int main()
{
    clrscr();
    int setA[MAX], setB[MAX], resultSet[MAX];
    int x, op;
    setA[0] = setB[0] = resultSet[0] = 0;

    printf("--SET OPERATIONS--\n");
    printf("\n1)Create two sets.");
    printf("\n2)Print the set.");
    printf("\n3)AuB - A Union B");
    printf("\n4)AnB - A Intersection B");
    printf("\n5)A - B : Difference between two sets A - B");
    printf("\n6)B - A : Difference between two sets B - A");
    printf("\n7)U - A : Complement of A");
    printf("\n8)Exit from program.\n");
    
    do
    {
        printf("\nEnter Your Choice : ");
        scanf("%d", &op);
        
        switch(op)
        {
            case 1:
                printf("\nCreate Set A: ");
                create(setA);
                printf("\nCreate Set B: ");
                create(setB);
                break;
            case 2:
                printf("\nSet A:\n");
                print(setA);
                printf("\nSet B:\n");
                print(setB);
                break;
            case 3:
                Union(setA, setB, resultSet);
                print(resultSet);
                break;
            case 4:
                intersection(setA, setB, resultSet);
                print(resultSet);
                break;
            case 5:
                difference(setA, setB, resultSet);
                print(resultSet);
                break;
            case 6:
                difference(setB, setA, resultSet);
                print(resultSet);
                break;
            case 7:
                Union(setA, setB, resultSet);
                int tmp = resultSet;
                difference(tmp, setA, resultSet);
                print(resultSet);
                break;
            case 8:
                exit(0);
            default:
                printf("\nPlease Enter a valid choice\n");
                break;
         }

    } while(op != 8);
    return 0;
}

void create(int set[])
{
    int n, i, x;
    set[0] = 0;
    printf("\nNo. of elements in the set : ");
    scanf("%d", &n);
    printf("Enter set elements : ");

    for(i = 1; i <= n; i++)
        scanf("%d", &set[i]);

    set[0] = n;
}

void print(int set[])
{
    int i, n;
    n = set[0];
    printf("\nMembers of the set :--> ");

    for(i = 1; i <= n; i++)
        printf("%d  ", set[i]);
}

void Union(int setA[], int setB[], int resultSet[])
{
    int i, n;
    resultSet[0] = 0;
    n = setA[0];

    for(i = 0; i <= n; i++)
        resultSet[i] = setA[i];

    n = setB[0];
    
    for(i = 1; i <= n; i++)
        if(!member(resultSet, setB[i]))
            resultSet[++resultSet[0]] = setB[i];
}

int member(int set[], int x)
{
    int i, n;
    n = set[0];

    for(i = 1; i <= n; i++)
        if(x == set[i])
            return(1);

    return(0);
}

void intersection(int setA[], int setB[], int resultSet[])
{
    int i, n;
    resultSet[0] = 0;
    n = setA[0];

    for(i = 1; i <= n; i++)
        if(member(setB, setA[i]))
            resultSet[++resultSet[0]] = setA[i];
}

void difference(int setA[], int setB[], int resultSet[])
{
    int i, n;
    n = setA[0];
    resultSet[0] = 0;

    for(i = 1; i <= n; i++)
        if(!member(setB, setA[i]))
            resultSet[++resultSet[0]] = setA[i];
}
