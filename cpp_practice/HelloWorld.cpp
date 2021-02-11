#include <bits/stdc++.h>

/*
  #include <bits/stdc++.h>はC++の機能を「全て」読み込むための命令です。
  例えばすでに紹介したcoutやendlは#include <bits/stdc++.h>によって読み込まれた機能です。 
  今後の解説で出てくるC++の機能の多くは#include <bits/stdc++.h>と書くことで利用できるようになります。
  これを書かずに読み込みが必要な機能を使った場合、エラーが発生します。
*/

using namespace std;

/*
  using namespace std;はプログラムを短く書くための機能です。
  #includeで読み込んだC++の機能を利用するためには、通常はstd::coutやstd::endlのようにstd::をはじめに付ける必要があります。 
  using namespace std;を利用すると、このstd::を省略して書くことができます。
  なお、using namespace std;も業務におけるプログラミングでは推奨されないことがありますが、
  競技プログラミングやAPG4bで利用する場合は全く問題ありません。
*/

/*
  問題文
  次の出力をするプログラムを書いてください。
  
  実行結果
    こんにちは
    AtCoder

  出力の最後（つまりAtCoderの後）に改行する必要があります。注意してください。
*/

void hello_atcoder(void) {
  cout << "こんにちは" << endl;
  cout << "AtCoder" << endl;
}

int main(void) {
  cout << "Hello world!" << endl;

  // 文字列の出力
  cout << "aaaa";
  cout << "iiii" << endl;
  cout << "uuu" << "eee" << endl;

  // 数値の出力
  cout << 12345 << endl;

  hello_atcoder();

  return 0;
}
