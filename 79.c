#include <stdio.h>

int main() // �� �ȵǴ��� �𸣰ڴ�.
{
	char a;
replay:
	scanf_s("%c", &a);

	while (a != 'q')
	{
		printf("%c\n", a);
		goto replay;
	}

	return 0;
}