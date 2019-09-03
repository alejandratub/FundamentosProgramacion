#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int k = 0;
 
int isPrime(int n) {
	int sqrt_n = (int) sqrt(n);
	int lim = (sqrt_n+1)/6;
	int i;
	if (n==2 || n==3) return 1;
	if (n==1 || !(n%2) || !(n%3)) return 0;
	for (i = 1; i <= lim; ++i) {
		if (!(n%(6*i-1)) || !n%(6*i+1)) return 0;
		++k;
	}
	return 1;
}
 
int orbit(int n) {
	int n_10 = n/10;
	int orbit = n%10;
	n = n_10;
	while (n != 0) {
		orbit *= 10;
		n /= 10;
	}
	orbit += n_10;
	return orbit;
}
 
int main() {
	int n,prime,i,j,s,q;
	int* taken;
	scanf("%d",&n);
	taken = malloc(n*sizeof(int));
	for (i = 0; i < n; ++i) taken[i] = 0;
 
	q = 1;
	for (i = 3; i < n; i += 2) {
		if (!taken[i]) {
			j = i;
			s = 0;
			do {
				if (j < n) {
					taken[j] = 1;
					++s;
				}
				prime = isPrime(j);
				j = orbit(j);
			} while (prime && j!=i);
			if (prime) q += s;
		}
	}
	printf("%d\n",q);
	return 0;
}