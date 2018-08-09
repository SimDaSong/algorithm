// 별찍기 문제는 2개의 for문을 필요로 함

#include <iostream>
using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  
  // 5줄
  for (int i=0; i<n; i++) {
      // 띄어쓰기
      for (int j=i; j<n-1; j++) { // j < n-1!!!
          printf(" ");
      }
      for (int j=0; j<=i; j++) {
        printf("*");
      }
      printf("\n");
  }
}
