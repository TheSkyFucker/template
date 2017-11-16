//[时间] O(n) 预处理[1, n] 关于 mod 的 inv
int gao_inv() { inv[1] = 1; rep(i, 2, N) inv[i] = mul(inv[mod % i], mod - mod / i); }

//[时间] 费马小定理 log 求 inv
//[加速] 频繁使用且域较小时可预处理
int inv(int d) { return qpow(d, mod - 2); } 
