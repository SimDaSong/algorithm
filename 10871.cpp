// 다시 보기!!
#include <iostream>
using namespace std;

int main()
{
    int n, x, input;
    scanf("%d %d", &n, &x);
    
    for (int i=0; i<n; i++) {
        scanf("%d", &input);
        if (input < x) printf("%d ", input);
    }

    // int *pn = new int[n];
    // for (int i=0; i<n; i++) {
    //     scanf("%d", &pn[i]);
    // }
    // for (int i=0; i<n; i++) {
    //     if (pn[i] < x) printf("%d ", pn[i]);
    // }
    
    return 0;
}
