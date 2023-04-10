// this is from desktop. PUSH 기모찌! 
typedef struct _list {
	size_t elem_size ;
	void * d ;

	void (* free)(struct _list * l) ;
	int (* add)(struct _list * l, void * s) ;
	int (* remove)(struct _list * l, int i, void * s) ;
    int (* get)(struct _list * l, int i, void * s) ;
    int (* size)(struct _list * l) ;
	int (* contains)(struct _list * l, void * e, int (* equal)(void * p1, void * p2)) ;
	void (* print)(struct _list * l, void (* elem_print)(void *s)) ;
} list ;
