#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

// search(v, x): Caso o elemento x esteja no vetor v, retorna o índice
// correspondente à primeira ocorrência do elemento x no vetor v. Caso
// contrário, retorna -1.
int search(vector<int> v, int x) {
  for (int i = 0; i < v.size(); i++)
    if (v[i] == x)
      return i;
  return -1;
}

// insert(v, x, k): Insere o elemento x na posição de índice k do vetor v. Caso
// k for superior ou igual ao comprimento do vetor v, preencher as posições até
// o índice k com o valor 0.
void insert(vector<int> v, int x, int k) {
  if (k >= v.size()) {
    for (int i = v.size(); i <= k; i++) {
      if (i == k)
        v[i] = k;
      else
        v[i] = 0;
    }
  } else {
    for (int i = 0; i <= k; i++)
      if (i == k)
        v[i] = k;
  }
}

// remove(v, x): Remove a primeira ocorrência do valor x no vetor v. Retorna -1,
// caso não haja nenhuma ocorrência.
int remove(vector<int> v, int x) {
  for (int i = 0; i < v.size(); i++)
    if (v[i] == x) {
      v.erase(v.begin() + i);
      cout << "vector = ";
      for (auto it = v.begin(); it != v.end(); ++it)
        cout << ' ' << *it;
      cout << endl;

      return x;
    }

  return -1;
}

// Escreva uma função principal para executar as seguintes instruções:

//- v = [0, -1, -2, -2, -4, -5]
//- rs = search(v, -2)
//- imprime rs
//- rs = search(v, 2)
//- imprime rs
//- insert(v, 2, 3)
//- imprime v
//- insert(v, 10, 10)
//- imprime v
//- rr = remove(v, -2)
//- imprime rr
//- imprime v

int main() {
  vector<int> v{0, -1, -2, -2, -4, -5};

  cout << "vector = ";
  for (auto it = v.begin(); it != v.end(); ++it)
    cout << ' ' << *it;
  cout << endl;

  int rs = search(v, -2);
  cout << "search -2 = " << rs << endl;

  rs = search(v, 2);
  cout << "search 2 = " << rs << endl;

  insert(v, 2, 3);
  cout << "insert 2 no indice 3" << endl;
  cout << "vector = ";
  for (auto it = v.begin(); it != v.end(); ++it)
    cout << ' ' << *it;
  cout << endl;

  insert(v, 10, 10);
  cout << "insert 10 no indice 10" << endl;
  cout << "vector = ";
  for (auto it = v.begin(); it != v.end(); ++it)
    cout << ' ' << *it;
  cout << endl;

  int rr = remove(v, -2);
  cout << "remove -2 = " << rr << endl;

  cout << "vector = ";
  for (auto it = v.begin(); it != v.end(); ++it)
    cout << ' ' << *it;
  cout << endl;
  return 0;
}
