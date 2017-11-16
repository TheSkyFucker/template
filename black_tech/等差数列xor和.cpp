// ArithmeticProgressionXor.cpp
// didn't vertify
bool get(ll l, ll d, ll P, ll n){
    bool res = 0;
    res ^= (l / P) & n & 1;
    l %= P;
    res ^= (d / P) & (n >> 1) & 1;
    d %= P;
    if (d * n + l < P) return res;
    else return res ^ get((d * n + l) % P , P , d , (d * n + l) / P);
}
ll Xor(ll l, ll r, ll d){
    ll n = (r - l) / d + 1, res = 0;
    int u = r ? 63 - __builtin_clzll(r) : 0;
    rep(i, 0, u + 1) if (get(l, d, 1ll << i, n)) res |= 1ll << i;
    return res;
}


