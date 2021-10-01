#undef NDEBUG
#ifdef ssu1
//#define _GLIBCXX_DEBUG
#endif
#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <bitset>
#include <sstream>
using namespace std;
#define fore(i, l, r) for(int i = int(l); i < int(r); ++i)
#define forn(i, n) fore(i, 0, n)
#define fori(i, l, r) fore(i, l, (r) + 1)
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mp make_pair
#define X first
#define Y second
template<typename T> inline T abs(T a){ return ((a < 0) ? -a : a); }
template<typename T> inline T sqr(T a){ return a * a; }
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
const int NMAX = 110000;
struct node{
    int l, r, par, link;
    map<char, int> next;
    node(){
        l = r = par = link = -1;
    }
    node(int _l, int _r, int _par) : l(_l), r(_r), par(_par){
        link = -1;
    }
};
struct tpos{
    int V, L;
    tpos(int _V, int _L) : V(_V), L(_L) {} 
};
char s[NMAX];
node t[2 * NMAX + 1];
int szt, szs;
int leng(int v){
    return t[v].r - t[v].l;
}
int add_edge_to_parent(int l, int r, int parent){
    int nidx = szt++;
    t[nidx] = node(l, r, parent);
    return (t[parent].next[s[l]] = nidx);
}
int split_edge(tpos pos){
    int v = pos.V, up = pos.L, down = leng(v) - up;
    if(up == 0) return v;
    if(down == 0) return t[v].par;
    int mid = add_edge_to_parent(t[v].l, t[v].l + down, t[v].par);
    t[v].l += down, t[v].par = mid;
    t[mid].next[s[t[v].l]] = v;
    return mid;
}
tpos read_char(tpos pos, char c){
    int v = pos.V, up = pos.L;
    if(up > 0)
        return s[t[v].r - up] == c ? tpos(v, up - 1) : tpos(-1, -1);
    else{
        int nextv = t[v].next.count(c) ? t[v].next[c] : -1;
        return nextv != -1 ? tpos(nextv, leng(nextv) - 1) : tpos(-1, -1);
    }
}
tpos fast_go_down(int v, int l, int r){
    if(l == r) return tpos(v, 0);
    while(true){
        v = t[v].next[s[l]];
        if(leng(v) >= r - l)
            return tpos(v, leng(v) - r + l);
        l += leng(v);
    }
    throw;
}
int link(int v){
    if(t[v].link == -1)
        t[v].link = split_edge(fast_go_down(link(t[v].par), t[v].l + int(t[v].par == 0), t[v].r));
    return t[v].link;
}
tpos add_char_to_tree(tpos pos, int i){
    while(true){
        tpos npos = read_char(pos, s[i]);
        if(npos.V != -1) return npos;
        int mid = split_edge(pos);
        add_edge_to_parent(i, szs, mid);
        pos = tpos(link(mid), 0);
        if(mid == 0)
            return pos;
    }
    throw;
}
void make_tree(){
    szt = 0;
    node root(-1, -1, -1); root.link = 0;
    t[szt++] = root;
    tpos pos(0, 0);
    forn(i, szs){
        pos = add_char_to_tree(pos, i);
    }
}
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
int K;
li result = 0;
typedef tree<pt, null_type, less<pt>, rb_tree_tag, tree_order_statistics_node_update> treap;
struct data{
    treap* t;
    map<int, int>* cnt;
    set<int>* positions;
    data(){
        t = new treap();
        cnt = new map<int, int>();
        positions = new set<int>();
    }
    void in_t(int x){
        (*cnt)[x]++;
        t->insert(mp(x, (*cnt)[x]));
    }
    void er_t(int x){
        t->erase(mp(x, (*cnt)[x]));
        (*cnt)[x]--;
    }
    void insert(int value){
        (*positions).insert(value);
        set<int>::iterator it = positions->lower_bound(value);
        if(it != positions->begin()){
            set<int>::iterator prev = it;
            prev--;
            in_t((*it) - (*prev));
        }
        if(it != positions->end()){
            set<int>::iterator next = it;
            next++;
            if(next != positions->end()){
                in_t((*next) - (*it));
            }
        }
        if(it != positions->begin() && it != positions->end()){
            set<int>::iterator prev = it, next = it;
            prev--, next++;
            if(next != positions->end()){
                er_t((*next) - (*prev));
            }
        }
    }
    int get_less(int key){
        return (int)t->order_of_key(mp(key, -1));
    }
    void clear(){
        t->clear();
        cnt->clear();
        positions->clear();
    }
};
int islands(data t, int ln){
    return (int)(t.positions->size() - t.get_less(ln + 1));
}
void dfs(int v, int ln, data& ord){
    if(t[v].next.empty()){
        ord.insert(szs - ln);
    }
    data cur;
    for(map<char, int>::iterator it = t[v].next.begin(); it != t[v].next.end(); it++){
        int u = it->Y;
        dfs(u, ln + leng(u), cur);
        if(cur.positions->size() > ord.positions->size())
            swap(cur, ord);
//        int ress = cur.positions->size() + ord.positions->size();
        for(set<int>::iterator jt = cur.positions->begin(); jt != cur.positions->end(); jt++){
            ord.insert(*jt);
        }
//        assert(ress == ord.positions->size());
        cur.clear();
    }
//    if(t[v].par == 0 && s[t[v].l] == 'a'){
//        cerr << v << " " << ord.positions->size() << endl;
//    }
    if(ln > 0){
        int ansL = -1, ansR = -1;
        {
            int lf = ln - leng(v) + 1, rg = ln;
            while(rg - lf > 1){
                int mid = (lf + rg) >> 1;
                if(islands(ord, mid) > K)
                    lf = mid;
                else
                    rg = mid;
            }
            for(int x = lf; x <= rg; x++){
                if(islands(ord, x) == K){
                    ansL = x;
                    break;
                }
            }
        }
        {
            int lf = ln - leng(v) + 1, rg = ln;
            while(rg - lf > 1){
                int mid = (lf + rg) >> 1;
                if(islands(ord, mid) < K)
                    rg = mid;
                else
                    lf = mid;
            }
            for(int x = rg; x >= lf; --x){
                if(islands(ord, x) == K){
                    ansR = x;
                    break;
                }
            }
        }
        if(ansL != -1){
            result += ansR - ansL + 1;
 //           cerr << "ln=" << ln << " " << t[v].l + 1 << " " << t[v].r << endl;
        }
    }
}
#include <sys/resource.h>
void init_stack(){
    const rlim_t kStackSize = 512 * 1024 * 1024;
    struct rlimit rl;
    int result;
    result = getrlimit(RLIMIT_STACK, &rl);
    if (result == 0)
    {
        if (rl.rlim_cur < kStackSize)
        {
            rl.rlim_cur = kStackSize;
            result = setrlimit(RLIMIT_STACK, &rl);
            if (result != 0)
            {
                fprintf(stderr, "setrlimit returned result = %d\n", result);
            }
        }
    }
}
int main() {
#ifdef ssu1
    assert(freopen("input.txt", "rt", stdin));
#endif
    init_stack();
    gets(s);
    szs = (int)strlen(s);
    s[szs++] = '$';
    make_tree();
    assert(scanf("%d", &K) == 1);
    data ord;
    dfs(0, 0, ord);
    if(K == 1){
        result -= szs;
    }
    cout << result << endl;
#ifdef ssu1
    cerr << "\nTime = " << double(clock()) / CLOCKS_PER_SEC << endl;
#endif    
    return 0;
}
