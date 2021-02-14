#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  vector<vector<int>> data(3, vector<int>(4));

  cout << "input 3 * 4 array" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> data.at(i).at(j);
    }
  }

  int count = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (data.at(i).at(j) == 0) {
        count++;
      }
    }
  }

  cout << count << endl;
}

void example_2(void) {
  vector<vector<int>> data(3);

  data.at(0).push_back(1);
  data.at(0).push_back(2);
  data.at(0).push_back(3);

  data.at(1).push_back(4);
  data.at(1).push_back(5);
  data.at(1).push_back(6);
  data.at(1).push_back(7);
  
  data.at(2).push_back(8);
  data.at(2).push_back(9);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < data.at(i).size(); j++) {
      cout << data[i][j];
    }
    cout << endl;
  }
}

void example_3(void) {
  cout << "input N" << endl;

  int N;
  cin >> N;

  vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3)));

  cout << "o - x (3 * 3)" << endl;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        cin >> data.at(i).at(j).at(k);
      }
    }
  }

  int count = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (data.at(i).at(j).at(k) == 'o') {
          count++;
        }
      }
    }
  }

  cout << count << endl;
}

void example_4(void) {
  vector<vector<vector<int>>> data = {
    {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
    },
    {
      {13, 14, 15, 16},
      {17, 18, 19, 20},
      {21, 22, 23, 24},
    },
  };

  int size1 = data.size();
  cout << size1 << endl;
  
  int size2 = data.at(0).size();
  cout << size2 << endl;

  int size3 = data.at(0).at(0).size();
  cout << size3 << endl;

  cout << size1 * size2 * size3 << endl;
}

void test_1(void) {
  cout << "入力" << endl;
  cout << "N M" << endl;
  cout << "試合1で勝った人の番号A1 試合1で負けた人の番号B1" << endl;
  cout << "試合2で勝った人の番号A2 試合2で負けた人の番号B2" << endl;
  cout << ". ." << endl;
  cout << ". ." << endl;
  cout << ". ." << endl;
  cout << "試合Mで勝った人の番号AM 試合Mで負けた人の番号BM" << endl;

  int N, M;
  cin >> N >> M;
  vector<int> W(M), L(M);
  for (int i = 0; i < M; i++) {
    cin >> W.at(i) >> L.at(i);
  }

  cout << "1" << endl;

  vector<vector<char>> result(N, vector<char>(N, '-'));

  for (int i = 0; i < M; i++) {
    result.at(W.at(i) - 1).at(L.at(i) - 1) = 'o';
    result.at(L.at(i) - 1).at(W.at(i) - 1) = 'x';
  }

  cout << "2" << endl;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (j == N - 1) {
        cout << result.at(i).at(j);
      } else {
        cout << result.at(i).at(j) << " ";
      }
    }
    cout << endl;
  }
}

int main(void) {
  example_1();
  example_2();
  example_3();
  example_4();
  test_1();

  return 0;
}

