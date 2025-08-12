#include <stdio.h>
int main()
{

	float a;
	float b;
	float c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	int d=(int) a;
	int e=(int) b;
	int f=(int) c;
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);

	if (a+b>c && b+c>a && c+a>b) {




		if(a==b && a==c && c==a && a+b>c && b+c>a && c+a>b)
		{
			printf("TRIANGLE IS EQUILATERAL");
		}

		else if ((a==b)!=c || (b==c)!=a || (c==a)!=b && a+b>c && b+c>a && c+a>b)  {
			printf("TRIANGLE IS ISOSCELES");
		}

		else if (a!=b && b!=c && c!=a && a+b>c && b+c>a && c+a>b)
		{
			printf("TRIANGLE IS SCALENE");
		}
	}


	else
	{
		printf (" the sides can't form a valid triangle");
	}

}
