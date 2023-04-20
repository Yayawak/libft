function AddMainCToCurrentCursor()

    let path = "/Users/rio/jaime_projects/createMainFileC/generate_main_c.c"
    let content = ""
    " let content = call system('cat path')
    cat path => content
    call append(line('$'), content)
    "
    "
    " " call append(line('$'), ' #include <stdio.h>
    "     \ #include <string.h> \n
    "     \ int main(int argc, char** argv)
    "     \{
    "     \return (0);
    "     \} ')
endfunction


nnoremap <leader>apm :call AddMainCToCurrentCursor()<CR>


