#include <stdio.h>
#include <string.h>

int main() {
    char a[10];
    char b[10];
    char c[10];
    int p=0,r=0,i=0;
    int t=0;
    int x,g,s,n,o;
    char *ptra = a;
    char *ptrb = b;
    char *ptrc = c;

    puts("Enter First String:");
    gets(a);
    puts("Enter Second String:");
    gets(b);
    printf("Enter the position where the item has to be inserted: ");

    scanf("%d",&p);
    r = strlen(a);
    n = strlen(b);
    i=0;

    while(i <= r) {
        *(ptrc+i)=*(ptra+i);
        i++;
    }

    s = n+r;
    o = p+n;
    for(i=p; i<s; i++) {
        x = *(ptrc+i);
        if(t<n) {
            *(ptra+i) = *(ptrb+t);
            t=t+1;
        }
        *(ptra+o)=x;
        o=o+1;
    }

    printf("%s", a);
    return 0;
}