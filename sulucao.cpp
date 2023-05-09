#include <iostream>
#include <vector>
using namespace std;

// Compilar no terminal com:
//  $ make vetores
//
//  Executar com:
//   $ ./vetores

// search(v, x): Caso o elemento x esteja no vetor v, retorna o índice
// correspondente à primeira ocorrência do elemento x no vetor v. Caso
// contrário, retorna -1.
int search(vector<int> &v, int x) {
  for (int i = 0; i < v.size(); i++)
    if (v[i] == x)
      return i;
  return -1;
}

// insert(v, x, k): Insere o elemento x na posição de índice k do vetor v. Caso
// k for superior ou igual ao comprimento do vetor v, preencher as posições até
// o índice k com o valor 0.
void insert(vector<int> &v, int x, int k) {
  if (k >= v.size()) {
    for (int i = v.size(); i <= k; i++) {
      if (i == k)
        v.insert(v.begin() + i, x);
      else
        v.insert(v.begin() + i, 0);
    }
  } else {
    v.insert(v.begin() + k, x);
  }
}

// remove(v, x): Remove a primeira ocorrência do valor x no vetor v. Retorna -1,
// caso não haja nenhuma ocorrência.
int remove(vector<int> &v, int x) {
  for (int i = 0; i < v.size(); i++)
    if (v[i] == x) {
      v.erase(v.begin() + i);
      return x;
    }
  return -1;
}

// printVector(v): Imprime os valores do vector de inteiros v.
void printVector(vector<int> v) {
  cout << "vector = ";
  for (auto it = v.begin(); it != v.end(); ++it)
    cout << ' ' << *it;
  cout << endl << endl;
}

// Escreva uma função principal para executar as seguintes instruções:
int main() {
  //- v = [0, -1, -2, -2, -4, -5]
  vector<int> v{0, -1, -2, -2, -4, -5};

  printVector(v);

  //- rs = search(v, -2)
  int rs = search(v, -2);

  //- imprime rs
  cout << "search -2 = " << rs << endl << endl;

  //- rs = search(v, 2)
  rs = search(v, 2);

  //- imprime rs
  cout << "search 2 = " << rs << endl << endl;

  //- insert(v, 2, 3)
  cout << "insert 2 no indice 3" << endl;
  insert(v, 2, 3);

  //- imprime v
  printVector(v);

  //- insert(v, 10, 10)
  cout << "insert 10 no indice 10" << endl;
  insert(v, 10, 10);

  //- imprime v
  printVector(v);

  //- rr = remove(v, -2)
  int rr = remove(v, -2);

  //- imprime rr
  cout << "remove -2 = " << rr << endl;

  //- imprime v
  printVector(v);
  return 0;
}
