CC = gcc
CLANG = clang
LLDB = lldb

all:
	${CLANG} -g -D BUFFER_SIZE=1024 get_next_line_utils.c get_next_line.c

test: all
# ${CC} -D BUFFER_SIZE=1024 get_next_line_utils.c get_next_line.c && ./a.out
# ${CLANG} -g -D BUFFER_SIZE=1024 get_next_line_utils.c get_next_line.c && ./a.out
	./a.out


db: all
	${LLDB} ./a.out
