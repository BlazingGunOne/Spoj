#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    for(int s = 1; s <= t; s++) {
        int n, r; cin >> n >> r;
        bool possible = true;
        map<pair<int,int>,int> umap;
        for(int j = 0; j < r; j++) {
            int i, c; cin >> i >> c;
            umap[make_pair(i, c)]++;
            if(umap[make_pair(i, c)]++ > 1) {
                possible = false;
            }
        }
        if(possible == true)
            cout << "Scenario #" << s << ": possible" << endl;
        else
            cout << "Scenario #" << s << ": impossible" << endl;
    }
} 