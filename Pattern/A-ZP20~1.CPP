#include<stdio.h>
#include<conio.h>
void A(int);
void B(int);
void C(int);
void D(int);
void E(int);
void F(int);
void G(int);
void H(int);
void I(int);
void J(int);
void K(int);
void L(int);
void M(int);
void N(int);
void O(int);
void P(int);
void Q(int);
void R(int);
void S(int);
void T(int);
void U(int);
void V(int);
void W(int);
void X(int);
void Y(int);
void Z(int);
void main(){
	int row;
	char ch;
	clrscr();
	printf("Input a Alphabet in Lowercase\n");
	scanf("%c", &ch);

	printf("Input the rows\n");
	scanf("%d", &row);
	switch (ch){
	case 'a':{ A(row); break; }
	case 'b':{ B(row); break; }
	case 'c':{ C(row); break; }
	case 'd':{ D(row); break; }
	case 'e':{ E(row); break; }
	case 'f':{ F(row); break; }
	case 'g':{ G(row); break; }
	case 'h':{ H(row); break; }
	case 'i':{ I(row); break; }
	case 'j':{ J(row); break; }
	case 'k':{ K(row); break; }
	case 'l':{ L(row); break; }
	case 'm':{ M(row); break; }
	case 'n':{ N(row); break; }
	case 'o':{ O(row); break; }
	case 'p':{ P(row); break; }
	case 'q':{ Q(row); break; }
	case 'r':{ R(row); break; }
	case 's':{ S(row); break; }
	case 't':{ T(row); break; }
	case 'u':{ U(row); break; }
	case 'v':{ V(row); break; }
	case 'w':{ W(row); break; }
	case 'x':{ X(row); break; }
	case 'y':{ Y(row); break; }
	case 'z':{ Z(row); break; }
	}
	getch();
}

void A(int row){
	int i, j, p;
	for (i = 0; i < row; i++){
	if (i == 0){
	    for (j = 0; j < row; j++){
		printf("*");
	    }}
	else if (i == row / 2){
	    for (j = 0; j < row; j++){
		printf("*");
	    }}
	else{
	    printf("*");
	    for (p = 0; p < row - 2; p++){
		printf(" ");
	    }
	    printf("*");
	}
	printf("\n");
	} }

void B(int row){
	int i, j, p;
	for (i = 0; i < row; i++){
	if (i == 0){
	    for (j = 0; j < row; j++){
		printf("*");
	    } }
	else if (i == row / 2){
	    for (j = 0; j < row; j++){
		printf("*");
	    } }
	else if (i == row - 1){
	    for (j = 0; j < row; j++){
		printf("*");
	    } }
	else{
	    printf("*");
	    for (p = 0; p < row - 2; p++){
		printf(" ");
	    }
	    printf("*");
	}
	printf("\n");
    } }

// C

void C(int row)
{
    int i, j, p;
    for (i = 0; i < row; i++)
    {

	if (i == 0)
	{
	    for (j = 0; j < row; j++)
	    {
		printf("*");
	    }
	}

	else if (i == row - 1)
	{
	    for (j = 0; j < row; j++)
	    {
		printf("*");
	    }
	}
	else
	{
	    printf("*");
	}

	printf("\n");
    }
}

// D

void D(int row)
{
    int i, j, p;
    for (i = 0; i < row; i++)
    {

	if (i == 0)
	{
	    for (j = 0; j < row; j++)
	    {
		printf("*");
	    }
	}

	else if (i == row - 1)
	{
	    for (j = 0; j < row; j++)
	    {
		printf("*");
	    }
	}
	else
	{
	    printf("*");
	    for (p = 0; p < row - 2; p++)
	    {
		printf(" ");
	    }
	    printf("*");
	}

	printf("\n");
    }
}

// E

void E(int row)
{
    int i, j, p;
    for (i = 0; i < row; i++)
    {

	if (i == 0)
	{
	    for (j = 0; j < row; j++)
	    {
		printf("*");
	    }
	}
	else if (i == row / 2)
	{
	    for (j = 0; j < row; j++)
	    {
		printf("*");
	    }
	}
	else if (i == row - 1)
	{
            for (j = 0; j < row; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
        }

        printf("\n");
    }
}

// F

void F(int row)
{
    int i, j, p;
    for (i = 0; i < row; i++)
    {

        if (i == 0)
        {
            for (j = 0; j < row; j++)
            {
                printf("*");
            }
        }
        else if (i == row / 2)
        {
            for (j = 0; j < row; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
        }

        printf("\n");
    }
}

// G

void G(int row)
{
    for (int i = 0; i < row; i++)
    {
	if (i == 0)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else if (i < row / 2)
	{
	    printf("*");
	}
	else if (i == row / 2)
	{
	    printf("*");
	    for (int j = 0; j < row / 2; j++)
		printf(" ");
	    for ( j = 0; j < row / 2; j++)
		printf("*");
	}
	else if (i == row - 1)
	{

	    for (int j = 0; j < row / 2 + 1; j++)
		printf("*");
	    for (j = 0; j < row / 2 - 1; j++)
		printf(" ");
	    printf("*");
	}
	else if (i > row / 2)
	{
	    printf("*");
	    for (int j = 0; j < row / 2 - 1; j++)
		printf(" ");
	    printf("*");
	    for (j = 0; j < row / 2 - 1; j++)
		printf(" ");
	    printf("*");
	}

	printf("\n");
    }
}

// H

void H(int row)
{
    for (int i = 0; i < row; i++)
    {
	if (i == row / 2)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else
	{
            printf("*");

            for (int j = 0; j < row - 2; j++)
                printf(" ");

            printf("*");
        }
        printf("\n");
    }
}

// I

void I(int row)
{
    for (int i = 0; i < row; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < row; j++)
                printf("*");
        }
        else if (i == row - 1)
        {
            for (int j = 0; j < row; j++)
                printf("*");
        }
        else
        {
            for (int j = 0; j < row / 2; j++)
                printf(" ");

            printf("*");
        }
        printf("\n");
    }
}

// J

void J(int row)
{
    for (int i = 0; i < row; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < row; j++)
                printf("*");
        }
        else if (i == row - 1)
        {
            for (int j = 0; j < row / 2; j++)
                printf("*");
        }
        else if (i > row / 2)
        {
            printf("*");

            for (int j = 0; j < row / 2; j++)
                printf(" ");

            printf("*");
        }
        else
        {
            for (int j = 0; j < row / 2 + 1; j++)
                printf(" ");

            printf("*");
        }
        printf("\n");
    }
}

// K

void K(int row)
{
    int space = row / 2 + 1;
    for (int i = 0; i < row; i++)
    {
        if (i < row / 2)
        {
            printf("*");
            for (int j = 0; j < space; j++)
                printf(" ");
            printf("*");
            space--;
        }
        else
        {
            printf("*");
            for (int j = 0; j < space; j++)
                printf(" ");
            printf("*");
            space++;
        }
        printf("\n");
    }
}

// L

void L(int row)
{
    for (int i = 0; i < row; i++)
    {
        if (i == row - 1)
        {
            for (int j = 0; j < row; j++)
                printf("*");
        }
        else
        {
            printf("*");
        }
        printf("\n");
    }
}

// M

void M(int row)
{
    int space = row / 2;
    int s = 1;
    for (int i = 0; i < row; i++)
    {
        printf("*");
        for (int j = 0; j < s; j++)
            printf(" ");
        printf("*");
	for (j = 0; j < space; j++)
	    printf(" ");
	printf("*");

	for (j = 0; j < s; j++)
	    printf(" ");
	printf("*");
	s++;

	printf("\n");
	space--;
    }
}

// N
void N(int row)
{
    int space = row - 1;
    int s = 1;
    for (int i = 0; i < row; i++)
    {

	// if (i < row / 2)
	{
	    printf("*");
	    for (int j = 0; j < s; j++)
		printf(" ");
	    printf("*");
	    for (j = 0; j < space; j++)
		printf(" ");
	    printf("*");
	}

	printf("\n");
	space--;
	s++;
    }
}

// O

void O(int row)
{
    int i, j, p;
    for (i = 0; i < row; i++)
    {

	if (i == 0)
	{
	    for (j = 0; j < row; j++)
	    {
		printf("*");
	    }
	}

	else if (i == row - 1)
	{
	    for (j = 0; j < row; j++)
	    {
		printf("*");
	    }
	}
	else
	{
	    printf("*");
	    for (p = 0; p < row - 2; p++)
	    {
		printf(" ");
	    }
	    printf("*");
	}

	printf("\n");
    }
}

// P

void P(int row)
{
    for (int i = 0; i < row; i++)
    {
	if (i == 0)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else if (i < row / 2)
	{
	    printf("*");
	    for (int j = 0; j < row - 2; j++)
		printf(" ");
	    printf("*");
	}
	else if (i == row / 2)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else
	{
	    printf("*");
	}
	printf("\n");
    }
}

// Q

void Q(int row)
{
    int i, j, p;
    for (i = 0; i < row; i++)
    {

	if (i == 0)
	{
	    for (j = 0; j < row; j++)
	    {
		printf("*");
	    }
	}

	else if (i == row - 1)
	{
	    for (j = 0; j < row; j++)
	    {
		printf("*");
	    }
	    int space = row;
	    for (int k = 0; k < row / 2 - 1; k++)
	    {
		printf("\n");
		for (int s = 0; s < space; s++)
		    printf(" ");
		printf("*");
		space++;
	    }
	}
	else
	{
	    printf("*");
	    for (p = 0; p < row - 2; p++)
	    {
		printf(" ");
	    }
	    printf("*");
	}

	printf("\n");
    }
}

// R

void R(int row)
{
    int space = 1;
    for (int i = 0; i < row; i++)
    {
	if (i == 0)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else if (i < row / 2)
	{
	    printf("*");
	    for (int j = 0; j < row - 2; j++)
		printf(" ");
	    printf("*");
	}
	else if (i == row / 2)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else
	{
	    printf("*");
	    if (i > row / 2)
	    {
		for (int k = 0; k < space; k++)
		    printf(" ");
		printf("*");
	    }
	    space = space + 2;
	}
	printf("\n");
    }
}

// S

void S(int row)
{
    for (int i = 0; i < row; i++)
    {
	if (i == 0)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else if (i < row / 2)
	{
	    printf("*");
	}
	else if (i == row / 2)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else if (i == row - 1)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else if (i > row / 2)
	{
	    for (int j = 0; j < row - 1; j++)
		printf(" ");
	    printf("*");
	}
	printf("\n");
    }
}

// T

void T(int row)
{
    for (int i = 0; i < row; i++)
    {
	if (i == 0)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else
	{
	    for (int j = 0; j < row / 2; j++)
		printf(" ");

	    printf("*");
	}
	printf("\n");
    }
}

// U

void U(int row)
{
    for (int i = 0; i < row; i++)
    {
        if (i == row - 1)
        {
            for (int j = 0; j < row; j++)
                printf("*");
        }
        else
        {
            printf("*");
            for (int j = 0; j < row - 2; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
}

// V

void V(int row)
{
    int space = 1;
    int cSpace = row - 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        printf("*");
	for (j = 0; j < cSpace; j++)
        {
            printf("  ");
        }
        printf("*");

        printf("\n");
        space++;
        cSpace--;
    }
}

// W

void W(int row)
{
    int space = 1;
    int cSpace = row - 1;
    for (int i = 0; i < row; i++)
    {
	for (int j = 0; j < space; j++)
	{
	    printf(" ");
	}
	printf("*");
	for (j = 0; j < cSpace; j++)
	{
	    printf(" ");
	}
	printf("*");

	for (j = 0; j < space; j++)
	{
	    printf(" ");
	}
	printf("*");
	for (j = 0; j < cSpace; j++)
        {
            printf(" ");
        }
        printf("*");

        printf("\n");
        space++;
        cSpace--;
    }
}

// X

void X(int row)
{
    int space = 1;
    int cSpace = row / 2;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        printf("*");
	for ( j = 0; j < cSpace; j++)
	{
	    printf("  ");
        }
        printf("*");

        printf("\n");
        if (i < row / 2)
        {
            space++;
            cSpace--;
        }
        else
        {
            space--;
            cSpace++;
        }
    }
}

// Y
void Y(int row)
{
    int space = 1;
    int cSpace = row / 2;
    for (int i = 0; i < row; i++)
    {
        if (i > row / 2)
	{
	    for (int j = 0; j < row / 2 + 1; j++)
		printf(" ");
	    printf("*");
	}
	else
	{
	    for (int j = 0; j < space; j++)
	    {
		printf(" ");
	    }
	    printf("*");
	    for (j = 0; j < cSpace; j++)
	    {
		printf("  ");
	    }
	    printf("*");
	}

	printf("\n");
	space++;
	cSpace--;
    }
}

// M

void Z(int row)
{
    int space = row - 1;
    for (int i = 0; i < row; i++)
    {
	if (i == 0)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else if (i == row - 1)
	{
	    for (int j = 0; j < row; j++)
		printf("*");
	}
	else
	{
	    for (int j = 0; j < space; j++)
		printf(" ");
	    printf("*");
	}
	space--;
	printf("\n");
    }
}