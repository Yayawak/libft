nnoremap <leader>runj :w <CR> :!javac % && java %< <CR>
nnoremap <leader>runc :w <CR> :!gcc % -o %< && ./%< <CR>
nnoremap <leader>runcm :w <CR> :!gcc % && ./a.out< <CR>
"map <F8> :w <CR> :!gcc % && ./a.out <CR>
"map <leader>runc :echo expand('%:t')
