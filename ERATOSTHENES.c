#include <stdio.h>
#define MAX 100
void sieveOfEratosthenes(int n) {
int prime[MAX];
for (int i = 0; i <= n; i++) {
prime[i] = 1;
}
prime[0] = prime[1] = 0;
for (int i = 2; i * i <= n; i++) {
if (prime[i]) {
for (int j = i * i; j <= n; j += i) {
prime[j] = 0;
}
}
}
printf("Prime numbers up to %d: ", n);
for (int i = 2; i <= n; i++) {
if (prime[i]) {
printf("%d ", i);
}
}
printf("\n");
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
sieveOfEratosthenes(n);
return 0;
}