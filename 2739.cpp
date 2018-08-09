#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    for (int i=1; i<=9; i++) {
        cout << n << ' ' << '**' << ' ' << i<< ' '  << '=' << ' ' << n*i << endl; // 왜 안되는건지 ㅠㅠ
    }

    return 0;
}
