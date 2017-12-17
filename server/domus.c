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

uint8_t domus_init(char *path)
{


}

void list_devices(int sock)
{
	
}

void list_blocks(int sock)
{
	
}

uint8_t send_to_node(char* payload, uint16_t len, int sock, node_t *from, node_t *to)
{
	
}

uint8_t call_node(node_t *from, node_t *to)
{
	
}

uint8_t exec_block(block_t *block, node_t *master, node_t *slave) {


}

uint8_t add_node(char *type, int sock)
{
        
}
uint32_t add_block(node_t *owner, uint16_t size, uint32_t location, uint8_t *block)
{

 
}
block_t get_block(uint32_t block_id)
{


}
