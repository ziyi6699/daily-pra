/*#include<stdio.h>//30.回文数
#include<stdlib.h>

int type(int n) {
	if (n <= 10000||n>=100000) {
		printf("Input error!\n");
		return 0;
	}
	int a = n / 1 % 10;
	int b = n/10 % 10;
	int c = n/100 % 10;
	int d = n/1000 % 10;
	int e = n/10000 % 10;
	int result = 0;
	if (a == e && b == d) {
		result = 1;
	}
	return result;
}

int main() {
	int n;
	printf(" input a five-digit number:");
	scanf_s("%d", &n);
	int result = type(n);
	if (result == 1) {
		printf("%d is a palindrome number.\n", n);
	}
	else if (result == 0) {
		printf("%d is not a palindrome number.\n", n);
	}
	return 0;
}*/


/*#include<stdio.h>//31.星期几

int main() {
	char n = 0;
	printf("intput the first character of day:");
	if (scanf_s("%c", &n) != 1) {
		printf("input error\n");
		return 0;
	}
	getchar();
	switch (n) {
	case'm':
		printf("Monday\n");
		break;
	case 't':
		printf("input the second character of day:");
		char m = 0;
		if (scanf_s("%c", &m) != 1) {
			printf("error\n");
			return 0;
		}
		getchar();
		if(m=='u'){
			printf("Tuesday\n");
		}
		else if (m == 'h') {
			printf("Thursday\n");
		}
		else {
			printf("error\n");
		}
		break;
	case 'w':
		printf("Wednesday\n");
		break;
	case 'f':
		printf("Friday\n");
		break;
	case 's':
		printf("input the second character of day:");
		if(scanf_s("%c", &m) != 1) {
			printf("error\n");
			return 0;
		}
		getchar();
		if (m == 'a') {
			printf("Saturday\n");
		}
		else if (m == 'u') {
			printf("Sunday\n");
		}
		else {
			printf("error\n");
		}
		break;
	}
	return 0;
}*/

/*#include<stdio.h>//32.删除指定字符
#include<string.h>

int main(){
	char str[100];
	printf("input a string:");
	scanf_s("%s", str, 100);
	getchar();
	int c = 0;
	printf("input n:");
	if (scanf_s("%c", &c) != 1) {
		printf("inout error\n");
		return 0;
	}
	getchar();
	int lenth = strlen(str);
	for (int i = 0; i < lenth; i++) {
		if (str[i] != c) {
			printf("%c", str[i]);
		}
		else {
			continue;
		}
	}
	return 0;
}*/