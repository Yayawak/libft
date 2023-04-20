
" nnoremap <Leader>kl :w <CR>:VimtexCompile <CR>
nnoremap <Leader>kl :w <CR> <Space><Space>ll <CR>
let g:vimtex_compiler_method = 'latexrun'
let g:vimtex_view_general_options = '--unique file:@pdf\#src:@line@tex'


let g:texflavor='latex'
"let g:vimtex_view_method='zathura'
let g:vimtex_view_method='skim'
let g:vimtex_quickfix_mode=0
set conceallevel=1
let g:texconceal='abdmg'
