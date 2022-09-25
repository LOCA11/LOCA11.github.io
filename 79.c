#include <stdio.h>

int main() // 왜 안되는지 모르겠다.
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