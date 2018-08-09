#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        printf("%d\n", i); // cout, cin은 느리고 endl은 굉장히 느림
    }

    return 0;
}
