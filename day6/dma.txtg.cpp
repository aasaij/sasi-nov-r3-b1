Dynamic Memory allocation 
stdlib.h


malloc()
	void* malloc(size_t numBytes);
	
calloc()
	void* calloc(size_t numBlocks, size_t blockSize);

realloc()
	void* realloc(void* oldMemory, size_t newSize);
	
free()
	void free(void* memory);