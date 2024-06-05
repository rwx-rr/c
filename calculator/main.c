#include <stdio.h>

int main()
{
	int num_one, num_two;

	char operator;

	printf("Enter your operator: ");
	scanf("%c", &operator);

	printf("Enter your operands: ");
	scanf("%d %d", &num_one, &num_two);

  // add operators here using `case`
	switch(operator) {
		case '+':
			printf("Total: %d\n", num_one + num_two);
			break;
		default:
			printf("No such operator exists.\n");
	}
			

	return 0;
}
