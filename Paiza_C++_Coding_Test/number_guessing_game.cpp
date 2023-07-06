/*
入力例1
30 50
40
出力例1
-10 10

*/
#include <iostream>
using namespace std;

int main()
{
    // Start from below
    int p_1{}, p_2{}, N{};
    cin >> p_1 >> p_2;
    cin >> N;
    cout << p_1 - N << " " << p_2 - N;

    return 0;
}