#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("input n: ");
	scanf("%d",&n);
	int a[n];
	printf("array of prime numbers:\n");
	for (int i=1;i<=n;i++)
		a[i]=i;
	for (int p=2;p<=n;p++) {
		if (a[p]!=0) {
			printf("%d ", a[p]);
			for (int j=p*p;j<=n;j+=p)
				a[j]=0;
		}
	}
	printf("\n");
	getchar();
	return 0;
}
