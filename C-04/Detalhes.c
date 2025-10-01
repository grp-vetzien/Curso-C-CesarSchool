#include <stdio.h>
struct ponto {
    int x;
    int y;
};
int main() {
    struct ponto q = {1,3};
    struct ponto *p;
    p = &q;
    printf("q.x = %d\n", q.x);
    printf("q.y = %d\n", q.y);
    printf("&q = %p\n", &q);
    printf("p = %p\n", p);
    printf("&(q.x) = %p\n", &(q.x));
    printf("&(q.y) = %p\n", &(q.y));
    printf("(*p).x = %d\n", (*p).x);
    printf("(*p).y = %d\n", (*p).y);
    return 0;
}