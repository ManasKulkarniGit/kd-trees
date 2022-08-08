

struct kdhyperrect {
	int dim;
	int *min, *max;              /* minimum/maximum coords */
};

struct kdnode {
	int *pos;
	int dir;
	char *filename;

	struct kdnode *left, *right;	/* negative/positive side */
};

struct res_node {
	struct kdnode *item;
	double dist_sq;
	struct res_node *next;
};

struct kdtree {
	int dim;
	struct kdnode *root;
	struct kdhyperrect *rect;
	void (*destr)(void*);
};

struct kdres {
	struct kdtree *tree;
	struct res_node *rlist, *riter;
	int size;
};



struct kdtree *kd_create(int k);
void kd_free(struct kdtree *tree);
void kd_clear(struct kdtree *tree);
void kd_insert(struct kdtree *tree, int *pos, char *data);
struct kdres *kd_nearest(struct kdtree *tree, int *pos);
struct kdres *kd_nearest_range(struct kdtree *tree, int *pos, double range);
void kd_res_free(struct kdres *set);
int kd_res_size(struct kdres *set);
void kd_res_rewind(struct kdres *set);
int kd_res_end(struct kdres *set);
int kd_res_next(struct kdres *set);
void *kd_res_item(struct kdres *set, int *pos);
void *kd_res_item_data(struct kdres *set);
// void count(struct kdtree *tree,int c);
