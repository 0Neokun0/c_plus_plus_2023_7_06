/*
7月7日は七夕です。
あなたは短冊を印刷するプログラムを作成することにしました。

文字列 S が入力されるので1文字ずつ改行し縦書きに出力して下さい。

例えば以下のような入力の場合

paiza
以下のように出力して下さい

p
a
i
z
a
*/
#include <iostream>
#include <string>
using namespace std;
 
int main(){

        string s2;
        cin >> s2;
           for (char c: s2){
                cout << c << endl;
           }
           return 0;
        
}