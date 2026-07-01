//#include <stdio.h>				기본 7-8
//void main()
//{
//	int a, b;
//	while (1)
//	{
//		printf("더할 두 수 입력(멈추려면 0을 입력): ");
//		scanf("%d %d", &a, &b);
//		if (a == 0)
//			break;
//		printf("%d +%d = %d\n", a, b, a + b);
//	}
//	printf("0을 입력해서 for문을 탈출했습니다.\n");
//}

//#include <stdio.h>			 기본7~10
//void main()
//{
//	int hap = 0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//		hap += i;
//	}
//	printf("1~100까지의 합(3의 배수 제외): %d\n", hap);
//}

//#include <stdio.h>			7번
//int main()
//{
//	int num1, num2;
//	printf("시작값 ==> ");
//	scanf("%d", &num1);
//	printf("끝값 ==> ");
//	scanf("%d", &num2);
//	while (num1 < num2)
//	{
//		if (num1 % 2 != 0)
//		{
//			printf("%d ", num1);
//		}
//		num1+=1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int num, i;
//    while (1)
//    {
//        printf("숫자 입력(종료하려면 0): ");
//        scanf("%d", &num);
//        if (num == 0)
//            break;
//        i = 0;
//        while (i < num * 2)
//        {
//            printf("\u2665");
//            i+=1;
//        }
//        printf("\n");
//    }
//    printf("프로그램을 종료합니다.\n");
//    return 0;
//}