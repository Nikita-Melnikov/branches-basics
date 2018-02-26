#include <stdio.h>
#include <stdlib.h>

int main {
	int *a;
	int n;
	a=new int[n];
	printf("array of prime numbers:\n");
	for (int i=1;i<=100;i++)
		a[i]=i;
	for int (p=2;p<=n;p++) {
		if (a[p]) {
			printf("%d ", a[p]);
			for (int j=p*p;j<=n;j++)
				a[j]=0;
		}
	}
	delete a;
	getchar();
	return 0;
}
