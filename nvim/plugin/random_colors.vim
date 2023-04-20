colorscheme PaperColor "my fav theme
"let s:mycolors = split(globpath(&rtp,"**/colors/*.vim"),"\n")
"let w:mycolors = split(globpath(&rtp,"**/colors/*.vim"),"\n")

function RandomColorScheme()
let mycolors = split(globpath(&rtp,"**/colors/*.vim"),"\n")
let cl = mycolors[localtime() % len(mycolors)]
"
"exe 'so ' . mycolors[localtime() % len(mycolors)]

echom cl
"echo $cl

exe 'so ' . cl

"set background=light

"unlet cl
unlet mycolors
endfunction






call RandomColorScheme()
":command NewColor call RandomColorScheme()

nnoremap <leader>rcl :call RandomColorScheme()<CR>
nnoremap <leader>lll :call RandomColorScheme()<CR>


func MyHandler(timer)
  "silent exec "!NewColor"
    silent exec "call RandomColorScheme()"
endfunc
" every 30 sec

"let timer = timer_start(60000, 'MyHandler', {'repeat': -1})

"let timer = timer_start(90000, 'MyHandler', {'repeat': -1})
" PREV SETTING
" let timer = timer_start(120000, 'MyHandler', {'repeat': -1})
let timer = timer_start(320000, 'MyHandler', {'repeat': -1})
"let timer = timer_start(20000, 'MyHandler', {'repeat': -1})
"let timer = timer_start(8000, 'MyHandler', {'repeat': -1})
"let timer = timer_start(3000, 'MyHandler', {'repeat': -1})
"let timer = timer_start(1000, 'MyHandler', {'repeat': -1})
"
"
