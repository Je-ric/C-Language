#includestdio.h
#includeconio.h

void main() {
    clrscr();
    printf([Factorial of a Number]n);
    int input, i, factorial = 1;
    
    printf(nEnter a number );
    scanf(%d, &input);
    
    for (i = input; i = 1; i--) {
        factorial = factorial  i;
    }
    
    printf(The factorial of %d is %d., input, factorial);
    getch();
}
