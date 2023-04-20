fun! TrimWhitespace()
    nnoremap <leader><CR> :so ~/.config/nvim/init.vim <CR>
    let l:save = winsaveview()
    keeppatterns %s/\s\+$//e
    call winrestview(l:save)
endfun

augroup YAWAK
    autocmd!
    autocmd BufWritePre * :call TrimWhitespace()
augroup END

