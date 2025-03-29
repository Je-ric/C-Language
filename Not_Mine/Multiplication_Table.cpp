#include <stdio.h>
main()
{
	int i, num, end;
	printf("Enter a number for which you want table\n");
	scanf("%d", &num);
	printf("Enter a number till where \nyou want multiplication with %d\n", num);
	scanf("%d", &end);
	printf("Multiplication table of %d is\n", num);
	for (i = 1; i <= end; i++)
	{
		printf("%d x %d = %d\n", num, i, num * i);
	}
}

Case II :

#include <stdio.h>
	main()
{
	int i, n, j = 0, k = 1, end;
	printf("Enter a number for which you want table\n");
	scanf("%d", &n);
	printf("Enter a number till where \nyou want multiplication with %d\n", n);
	scanf("%d", &end);
	while (k <= end)
	{
		i = n;
		j = j + i;
		printf("%d x %d = %d\n", i, k, j);
		k++;
	}
}
