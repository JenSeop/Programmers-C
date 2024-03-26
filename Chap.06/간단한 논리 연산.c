#include <stdio.h>
#include <stdbool.h>

#define CJT(x, y) ((x) || (y))
#define ITS(x, y) ((x) && (y))

bool solution(bool x1, bool x2, bool x3, bool x4) {
    return (ITS(CJT(x1, x2), CJT(x3, x4)));
}