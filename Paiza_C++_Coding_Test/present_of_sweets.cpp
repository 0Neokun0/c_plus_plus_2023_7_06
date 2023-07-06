/*
あなたはバレンタインデーにもらったお菓子のお返しとして、ホワイトデーにお菓子をプレゼントしようとしています。

バレンタインデーにもらったお菓子は、チョコレートかケーキのいずれかでした。もらったお菓子よりも安いお返しをしては失礼だと考えたあなたは、チョコレートをもらった場合はその 2 倍、ケーキをもらった場合はその 5 倍の金額の価格のお返しをすることにしました。

もらったお菓子の種類と金額が与えられるので、お返しの金額を求めるプログラムを作成してください。

例えば、入力例 1 ではもらったお菓子は 100 円のチョコレートなので、その 2 倍の 200 円のお返しをします。
*/
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    //Start from below
    char product[100]{};
    int amount{};
    char product_chocolate[100]{"chocolate"};
    char product_cake[100]{"cake"};
    cin.getline(product, 1000);
    cin >> amount;
    

    if(strcmp(product, product_chocolate) == 0)
        cout << amount * 2;
    else 
        cout << amount * 5;

    return 0;
}