set nu ai ci si mouse=a ts=4 sts=4 sw=4
nmap<F2> : vs %<.in <CR>
nmap<F3> : !gedit % <CR>
nmap<F7> : !g++ % -o %< -O2 -g -std=c++11 -Wall <CR>
nmap<F8> : !./%< < %<.in <CR>
nmap<F9> : :w <CR> :make %< <CR>

