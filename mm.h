/*
 * mm.h - Header file for dynamic memory allocator
 */
#ifndef MM_H
#define MM_H

#include <stddef.h>

/* Function prototypes */
int mm_init(void);
void *mm_malloc(size_t size);
void mm_free(void *ptr);
void *mm_realloc(void *ptr, size_t size);
void *mm_calloc(size_t nmemb, size_t size);

#endif /* MM_H */
