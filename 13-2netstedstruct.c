#include <stdio.h>
#include <string.h>

struct date
{
	int years;
	int month;
	int day;
};

struct account
{
	struct date open;
	char name[12];
	int actnum;
	double balance;
};

int main(void)
{
	struct account me = { {2018, 3, 9 },"홍길동", 1001, 300000 };

	printf("구조체크기: %d\n", sizeof(me));
	printf("[%d, %d, %d]\n", me.open.years, me.open.month, me.open.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);
}