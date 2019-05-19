#include <bits/stdc++.h>
using namespace std;
#define MAX 100010
const int INF = 1e9;
int N, M, Q;
vector<pair<int, int>> graph[MAX];
int new_cable[MAX];
int dist[MAX];
bool visited[MAX];
 
struct option {
  bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
    return a.second > b.second;
  }
};
 
void Prim(int src) {
  
  priority_queue<pair<int, int>, vector<pair<int, int>>, option> pq;
  pq.push(pair<int, int>(src, 0));
  dist[src] = 0;
  
  while (!pq.empty()) {
    int u = pq.top().first;
    pq.pop();
    visited[u] = true;
    for (int i = 0; i < graph[u].size(); ++i) {
      int v = graph[u][i].first;
      int w = graph[u][i].second;
      if (!visited[v] && w < dist[v]) {
        dist[v] = w;
        pq.push(pair<int, int>(v, w));
      }
    }
  }
  
  sort(dist + 1, dist + N + 1);
  
  int d = N, p = 0;
  while (d >= 1 && p < Q) {
    if (dist[d] > new_cable[p]) {
      dist[d] = new_cable[p];
      d--;
      p++;
    } else { // dist[d] <= new_cable[p]
      break;
    }
  }
 
  long long sum = 0;
  for (int i = 1; i <= N; ++i) sum += dist[i]; 
  cout << sum << endl;
}
 
int main() {
  int u, v, w;
  cin >> N >> M;
  
  fill(dist, dist + N + 1, INF);
  fill(visited, visited + N + 1, false);
  
  for (int i = 0; i < M; ++i) {
    cin >> u >> v >> w;
    graph[u].push_back(pair<int, int>(v, w));
    graph[v].push_back(pair<int, int>(u, w));
  }
  
  cin >> Q;
  for (int i = 0; i < Q; ++i) cin >> new_cable[i];
  sort(new_cable, new_cable + Q);
  Prim(1);
  
  return 0;
}