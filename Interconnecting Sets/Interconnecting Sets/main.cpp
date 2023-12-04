//
//  main.cpp
//  Interconnecting Sets
//
//  Created by Ryan Ong on 12/4/23.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MaxN = 1e4;
int root[MaxN];
struct EDGE{
    int a, b, v;
};
vector<EDGE>edge;

bool compare(EDGE ths, EDGE rhs){
    return ths.v < rhs.v;
}

int findSource(int x){
    return root[x] == x ? x : root[x] = findSource(root[x]);
}
 
bool unionSource(int a, int b){
    int source_A = findSource(a);
    int source_B = findSource(b);
    if (source_A == source_B){
        return false;
    }
    root[source_B] = source_A;
    return true;
}

int main() {
    int N, M, a, b, v;
    while (scanf("%d %d", &N, &M) != EOF){
        for (int i = 0; i < N; i ++){
            root[i] = i;
        }
        for (int i = 0; i < M; i ++){
            scanf("%d %d %d", &a, &b, &v);
            edge.push_back({a, b, v});
        }
        sort(edge.begin(), edge.end(), compare);
        bool sign = true;
        int cnt = 0;
        for (int i = 0; i < M; i ++){
            if (unionSource(root[edge[i].a], root[edge[i].b])){
                cnt += edge[i].v;
            }
        }
        cout << '\n' << "Minimum Cost: " << cnt << '\n' << '\n';
    }
}
