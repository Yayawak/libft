CC = gcc
CLANG = clang
LLDB = lldb
BFS = 3

# flags = -Wall -Wextra -Werror

# all:
# ${CLANG} -g ${flags} get_next_line_utils.c get_next_line.c
# ${CLANG} -g -D ${flags} BUFFER_SIZE=1024 get_next_line_utils.c get_next_line.c
# ${CLANG} -g -D ${flags} BUFFER_SIZE=14 get_next_line_utils.c get_next_line.c
# ${CLANG} -g -D ${flags} BUFFER_SIZE=${BFS} get_next_line_utils.c get_next_line.c

# test: all
test:
# ${CC} -D BUFFER_SIZE=1024 get_next_line_utils.c get_next_line.c && ./a.out
# ${CLANG} -g -D BUFFER_SIZE=1024 get_next_line_utils.c get_next_line.c && ./a.out
	${CLANG} -g -D ${flags} BUFFER_SIZE=${BFS} get_next_line_utils.c get_next_line.c
	./a.out


db: all
	${LLDB} ./a.out
