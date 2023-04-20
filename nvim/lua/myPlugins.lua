call plug#begin('~/.config/nvim/plugged')
Plug 'neoclide/coc.nvim', {'branch': 'release'}
Plug 'https://github.com/humanoid-colors/vim-humanoid-colorscheme'
Plug 'https://github.com/liuchengxu/space-vim-dark'
Plug 'https://github.com/Rigellute/rigel'
"Plug 'https://github.com/yonlu/omni.vim'
Plug 'https://github.com/bratpeki/truedark-vim'
Plug 'https://github.com/patstockwell/vim-monokai-tasty'
Plug 'https://github.com/jsit/toast.vim'
Plug 'https://github.com/sonph/onehalf'
Plug 'https://github.com/jaredgorski/SpaceCamp'
Plug 'https://github.com/ayu-theme/ayu-vim'
Plug 'https://github.com/ackyshake/Spacegray.vim'
Plug 'https://github.com/tomasr/molokai'
Plug 'https://github.com/altercation/vim-colors-solarized'
Plug 'https://github.com/NLKNguyen/papercolor-theme'
Plug 'https://github.com/sainnhe/everforest'
Plug 'https://github.com/sainnhe/gruvbox-material'
Plug 'bluz71/vim-moonfly-colors'
Plug 'Abstract-IDE/Abstract-cs'
Plug 'jbyuki/nabla.nvim'
Plug 'samodostal/image.nvim'
Plug 'nvim-lua/plenary.nvim'
Plug 'https://github.com/tpope/vim-markdown'
Plug 'https://tpope.io/vim/sensible.git'
Plug 'https://tpope.io/vim/repeat.git'
Plug 'https://tpope.io/vim/commentary.git'
Plug 'mattn/emmet-vim'
Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'}
Plug 'https://github.com/p00f/nvim-ts-rainbow'
Plug 'https://gitlab.com/yorickpeterse/nvim-window.git'
Plug 'https://github.com/alec-gibson/nvim-tetris'
Plug 'iqxd/vim-mine-sweeping'
Plug 'ThePrimeagen/vim-be-good'
Plug 'https://github.com/seandewar/nvimesweeper'
"Plug 'archseer/colibri.vim' "Blue wtf
Plug 'fcpg/vim-orbital'
Plug 'fcpg/vim-farout'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'dense-analysis/ale'
Plug 'preservim/nerdtree'
Plug 'gilgigilgil/anderson.vim'
Plug 'junegunn/fzf', { 'do': { -> fzf#install() } }
Plug 'junegunn/fzf.vim'
Plug 'nvim-treesitter/nvim-treesitter'
Plug 'bryall/contextprint.nvim'
Plug 'gruvbox-community/gruvbox'
Plug 'nvim-telescope/telescope.nvim', { 'tag': '0.1.0' }
Plug 'itchyny/lightline.vim'
Plug 'joshdick/onedark.vim'
Plug 'sheerun/vim-polyglot' "multi-lanuages
Plug 'kien/ctrlp.vim' "folder finder
call plug#end()


set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'scrooloose/syntastic' "syntax error checker
Plugin 'jiangmiao/auto-pairs' "auto pair paratheses
Plugin 'VundleVim/Vundle.vim'
Plugin 'tpope/vim-fugitive'
Plugin 'rstacruz/sparkup', {'rtp': 'vim/'}
call vundle#end()            " required
