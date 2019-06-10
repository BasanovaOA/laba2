#include <stdio.h>
void main() {
	printf("1. Task 1\r\n2. Task 2\r\n");
	double x, y;
	char answer = _getch();
	switch (answer)
	{
	case '1':
		printf("Task 1\n vvedite x:\n");
		scanf("%lf", &x);
		printf("vvedite y:\n");
		scanf("%lf", &y);
		isInArea(x, y) ? printf("Iside area.\n") : printf("Outside the area.\n");
		break;

	case '2':
		printf("Task 2\nEnter x:\n");
		scanf("%lf", &x);
		printf("%f\n", f(x));
		break;

	default:
		printf("Incorrect input.\n");
		break;
	}
	system("pause");
	return;
}