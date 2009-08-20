#ifndef _INCLUDE_ITER_H_
#define _INCLUDE_ITER_H_ 1

#ifndef R_API
#define R_API
#endif

#define r_iter_set(x,y,z) x[y]=z
#define r_iter_get(x) *x
#define r_iter_next(x) x+1
#define r_iter_next_n(x,y) x+y
#define r_iter_prev(x) (--it==*it)?0:it
#define r_iter_delete(x) for(;*x;x++)*x=*(x+1)
#define r_iter_last(x) (*x!=0)

R_API void **r_iter_new(int n);
R_API void **r_iter_first(void **it);
R_API void r_iter_foreach(void *it, int (*callback)(void *, void *), void *user);
R_API void *r_iter_free(void *ptr);

#endif
