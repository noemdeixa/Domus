#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <arpa/inet.h>
#include <time.h>
#include "domus.h"

#define SERV_PORT 2323 
#define LISTENQ 20 

void *server(void *connfd)
{

}

int main (int argc, char **argv)
{
	int listenfd, connfd;
	socklen_t clilen;
	struct sockaddr_in cliaddr, servaddr;
	pthread_t thread_id;
	
	domus_init(NULL);
	if ((listenfd = socket (AF_INET, SOCK_STREAM, 0)) < 0) {
		perror("Error on creating socket \n Quiting...");
		exit(2);
	}
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(SERV_PORT);
	
	bind(listenfd, (struct sockaddr *) &servaddr, sizeof(servaddr));
	printf("SERVER STARTED ON 0.0.0.0:%d\n", SERV_PORT);
	listen(listenfd, LISTENQ);
	clilen = sizeof(cliaddr);
	while(connfd = accept(listenfd, (struct sockaddr *) &cliaddr, &clilen)) {
		if(pthread_create(&thread_id, NULL, server, (void*) &connfd) < 0)
			perror("Error when handling new connection");    
	}
	return 0;
}
