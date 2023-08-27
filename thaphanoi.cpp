#include <stdio.h>
// using namespace std;

int i = 0;

void thaphanoi(int n, char A, char B, char C)
{
  if (n == 1)
  {
    printf("Buoc%d Chuyen dia %d tu %c sang %c\n", ++i, n, A, C);
  }
  else
  {
    thaphanoi(n - 1, A, C, B);
    printf("Buoc%d Chuyen dia %d tu %c sang %c\n", ++i, n, A, C);
    thaphanoi(n - 1, B, A, C);
  }
}

int main()
{
  // ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int n;
  scanf("%d", &n);
  thaphanoi(n, 'A', 'C', 'B');
}
