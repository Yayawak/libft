CLANG = CLANG
LLDB = lldb
SD = sudo
GCC = gcc


# all:
# ${CLANG} -g get_next_line.c && ./a.out
# ${CLANG} -g get_next_line_utils.c gnl_v3.c
# ${CLANG} -g -D BUFFER_SIZE=15 get_next_line_utils.c gnl_v3.c
# ${CLANG} -g gnl_v3.c && ./a.out
# ${CLANG} -g -D BUFFER_SIZE=3 get_next_line_utils.c gnl_v3.c

# -fsanitize=address
test:
# ${CLANG} -g -D BUFFER_SIZE=3 get_next_line_utils.c get_next_line.c && ./a.out 41
# ${GCC} -g -fsanitize=address get_next_line_utils.c get_next_line.c && ./a.out
# ${CLANG} -g -fsanitize=address,leak get_next_line_utils.c get_next_line.c && ./a.out
# ${CLANG} -g -D BUFFER_SIZE=3 get_next_line.c && ./a.out 41
	${CLANG} -g get_next_line_utils.c get_next_line.c && ./a.out
# ${CLANG} -g get_next_line.c && ./a.out

tstq:
	${CLANG} -g get_next_line_utils.c
	${LLDB} ./a.out

# test: all

db:
# ${CLANG} -g -D BUFFER_SIZE=3 get_next_line_utils.c get_next_line.c && ${LLDB} ./a.out
	${CLANG} -g get_next_line.c && ${LLDB} ./a.out

