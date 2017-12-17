all:
	gcc -O2 -g  ./server/server.c ./server/domus.c -o ./build/domus_server -pthread
