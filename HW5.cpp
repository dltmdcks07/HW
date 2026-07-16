//#include <stdio.h>
//void main()
//{
//	printf("10&7 = %d\n", 10 & 7);
//	printf("123&456 = %d\n", 123 & 456);
//	printf("0xFFFF&0000 = %d\n", 0xFFFF & 0000);
//}

//#include <stdio.h>
//void main()
//{
//	printf("10|7 = %d\n", 10 | 7);
//	printf("123|456 = %d\n", 123 | 456);
//	printf("0xFFFF|0000 = %d\n", 0xFFFF | 0000);
//}

//#include <stdio.h>
//void main()
//{
//	printf("10^7 = %d\n", 10 ^ 7);
//	printf("123^456 = %d\n", 123 ^ 456);
//	printf("0xFFFF^0000 = %d\n", 0xFFFF ^ 0000);
//}

//#include <stdio.h>
//void main()
//{
//	char a = 'A', b, c;
//	char mask = 0x0F;
//	printf("%X & %X = %X\n", a, mask, a & mask);
//	printf("%X | %X = %X\n", a, mask, a | mask);
//	mask = 'a' - 'A';
//	b = a ^ mask;
//	printf("%c^%d = %c\n", a, mask, b);
//	a = b ^ mask;
//	printf("%c^%d = %c\n", b, mask, a);
//}

//#include <stdio.h>
//void main()
//{
//	int a = 12345;
//	printf("%d\n", ~a + 1);
//}

//#include <stdio.h>
//void main()
//{
//	int a = 100, result;
//	int i;
//	for (i = 0; i <= 5; i++)
//	{
//		result = a << i;
//		printf("%d << %d = %d\n", a, i, result);
//	}
//	for (i = 0; i <= 5; i++)
//	{
//		result = a >> i;
//		printf("%d >> %d = %d\n", a, i, result);
//	}
//}