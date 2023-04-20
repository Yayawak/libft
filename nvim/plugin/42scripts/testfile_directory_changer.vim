function! GoToTest(layer)
  let current_file = expand('%')
  let test_file = substitute(current_file, 'src\/'.a:layer.'\/', 'tests\/'.a:layer.'\/test_', '')
  echo test_file
  execute 'edit ' . test_file
endfunction

" function! GoToTestFile()
"     let current_file = expand('%')
"     echo current_file
"     if current_file =~# '^src/'
"         let test_file = substitute(current_file, '^src/', 'tests/', '')
"         let test_file = substitute(test_file, '\.c$', '.out', '')
"         execute 'edit ' . test_file
"     else
"         echo 'Not a source file'
"     endif
" endfunction


function! GoToSourceFile()
    let current_file = expand('%')
    if current_file =~# '^tests/'
        let src_file = substitute(current_file, '^tests/', 'src/', '')
        let src_file = substitute(src_file, '\.out$', '.c', '')
        execute 'edit ' . src_file
    else
        echo 'Not a test file'
    endif
endfunction

command! GoToTestFile :call GoToTestFile()
command! GoToSourceFile :call GoToSourceFile()
