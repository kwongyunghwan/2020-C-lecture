#include <stdio.h>

int main(void) {

	//문자 선언과 출력
	char ch = 'A';
	printf("%c, %d\n", ch, ch);	//%c 문자 출력형식문자, %d 정수 출력형식문자

	//문자열 선언 방법1
	char java[] = { 'J','A','V','A','\0' };
	printf("%s\n", java);

	//문자열 선언 방법2

	char c[] = "C language";	//크기를 생략하는 것이 간편
	printf("%s\n", c);

	char csharp[5] = "C#";
	printf("%s\n", csharp);

	printf("%c%c\n", csharp[0], csharp[1]);

	return 0;



}