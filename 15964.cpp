#include <iostream>
using namespace std;

int main()
{
    int a,b;
    
    while (true) {
        scanf("%d %d", &a, &b);
        if ((1<=a && a<=100000) && (1<=b && b<=100000)) break;
    }
    
    printf("%d", (a+b)*(a-b));
    
    return 0;
}
