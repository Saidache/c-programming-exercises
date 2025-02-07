#include <stdio.h>
int isPrime(int n) {
if (n <= 1) return 0;
for (int i = 2; i * i <= n; i++) {
if (n % i == 0) return 0;
}
return 1;
}
void printPrimes(int start, int end) {
printf("Prime numbers between %d and %d: ", start, end);
for (int i = start; i <= end; i++) {
if (isPrime(i)) {
printf("%d ", i);
}
}
printf("\n");
}
int main() {
int start, end;
printf("Enter range (start and end): ");
scanf("%d %d", &start, &end);
printPrimes(start, end);

return 0;
}