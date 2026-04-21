class UnionFind {
public:
    vector<int> parent;

    UnionFind(int n) : parent(n) {
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    bool unify(int x, int y) {
        int rx = find(x), ry = find(y);
        if (rx == ry) return false;
        if (rx < ry) parent[ry] = rx;
        else parent[rx] = ry;
        return true;
    }
};

class Solution {
public:
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int N = source.size();
        UnionFind uf(N);

        for (auto& sw : allowedSwaps)
            uf.unify(sw[0], sw[1]);

        unordered_map<int, unordered_map<int, int>> hm;
        for (int i = 0; i < N; i++) {
            int root = uf.find(i);
            hm[root][source[i]]++;
        }

        int res = 0;
        for (int i = 0; i < N; i++) {
            int root = uf.find(i);
            if (hm[root][target[i]] > 0) {
                res++;
                hm[root][target[i]]--;
            }
        }

        return N - res;
    }
};