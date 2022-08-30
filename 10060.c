#include<stdio.h>

struct Complex{
	int real;
	int imag;
};

void fn2(struct Complex var1,struct Complex var2,struct Complex *var3);

int main()
{
	struct Complex var1, var2, var3;
	scanf("%d %d", &var1.real, &var1.imag);
	scanf("%d %d", &var2.real, &var2.imag);
	fn2(var1, var2, &var3);
	printf("%d %d", var3.real, var3.imag);
}

void fn2(struct Complex var1,struct Complex var2,struct Complex *var3)
{
    int reans;
    int imans;
    reans = var1.real * var2.real - var1.imag * var2.imag;
    imans = var1.real * var2.imag + var1.imag * var2.real;
    var3->real = reans;
    var3->imag = imans;
}