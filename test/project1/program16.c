#include "Header.h"

#include<assert.h>      // to testing purpose

int main()
{

    assert(Addition(10, 11) == 22);
    assert(Addition(-10, 20) == 10);
    assert(Addition(10, -11) == -1);
    assert(Addition(0, 11) == 11);

    return EXIT_SUCCESS;    // NOTHING BUT equal to 0
}