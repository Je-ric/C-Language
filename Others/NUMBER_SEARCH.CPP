#includestdio.h
#includeconio.h

int main() {
    clrscr();
    int roll[10];
    int r, m = 0;

    printf(Enter 10 roll numbersn);
    for(int i = 0; i  10; i++)
        scanf(%d, &roll[i]);

    printf(nRoll numbers are given belown);
    for(int i = 0; i  10; i++)
        printf(%d , roll[i]);

    printf(nEnter your roll number to search );
    scanf(%d, &r);

    for(int j = 0; j  10; j++) {
        if(r == roll[j]) {
            printf(Roll number is found at position %d, j + 1);
            m = 1;
        }
    }

    if(m == 0)
        printf(Not Found);

    getch();
    return 0;
}
