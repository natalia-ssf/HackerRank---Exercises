#include <iostream>
#include <vector>
using namespace std;

class LRUCache {
private:
    int cp;
    vector<pair<int, int>> cache;

public:
    LRUCache(int capacidade) {
        cp = capacidade;
    }

    void set(int chave, int valor) {
        for (int i = 0; i < cache.size(); ++i) {
            if (cache[i].first == chave) {
                cache.erase(cache.begin() + i);
                break;
            }
        }

        if (cache.size() == cp) {
            cache.pop_back();
        }

        cache.insert(cache.begin(), make_pair(chave, valor));
    }

    int get(int chave) {
        for (int i = 0; i < cache.size(); ++i) {
            if (cache[i].first == chave) {
                int valor = cache[i].second;
                
                cache.erase(cache.begin() + i);
                cache.insert(cache.begin(), make_pair(chave, valor));
                
                return valor;
            }
        }
        return -1;
    }
};

int main() {
    int num_op, capacidade;
    cin >> num_op >> capacidade;

    LRUCache l(capacidade);

    for (int i = 0; i < num_op; ++i) {
        string comando;
        cin >> comando;

        if (comando == "get") {
            int chave;
            cin >> chave;
            cout << l.get(chave) << endl;
        } 
        else if (comando == "set") {
            int chave, valor;
            cin >> chave >> valor;
            l.set(chave, valor);
        }
    }

    return 0;
}
