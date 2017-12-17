#define ENODEV 1  //No device or block found
#define EFULL 2   //Max nodes hit
#define EOVERF 3  //Overflow attempt (ignoring protocol!)
#define EPRIV 4   //Not enough privileges

struct node_s {
	uint32_t node_id;
	char alias[20];
	uint8_t permissions;
	int sock;
};
typedef struct node_s node_t;

struct net_s {
	uint32_t net_id;  //network-id
	node_t **node;
};
typedef struct net_s net_t;

struct block_s {
        node_t *owner;
	uint32_t block_id;
	uint16_t size;
	uint32_t location;
	uint8_t *block;
};
typedef struct block_s block_t;

uint8_t domus_init(char *);
uint8_t send_to_node(char *, uint16_t, int, node_t *, node_t *);
void list_devices(int);
void list_blocks(int);
uint8_t add_node(char *, int);
uint32_t add_block(node_t *, uint16_t, uint32_t ,uint8_t *);
block_t get_block(uint32_t );
uint8_t call_node(node_t *, node_t *);
uint8_t exec_block(block_t *, node_t *, node_t *);
