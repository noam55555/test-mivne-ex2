#include <stdio.h>
#include "ex2.h"

int main()
{
    printf("%d\n", add(-1, 4));
    printf("%d\n", add(3, 5));
    printf("%d\n", add(-9, -7));
    printf("%d\n", add(10, 1));
    printf("%d\n", add(2, -2));
    printf("%d\n", add(8, -3));
    printf("%d\n", add(-2147483648, 1));
    printf("%d\n", add(-4, -2));
    printf("%d\n", add(-9, 9));
    printf("%d\n", add(5, 2));
    printf("%d\n", add(-1, -7));
    printf("%d\n", add(2, -8));
    printf("%d\n", add(2, 7));
    printf("%d\n", add(2, 6));
    printf("%d\n", add(8, -4));
    printf("%d\n", add(-5, 4));
    printf("%d\n", add(4, 10));
    printf("%d\n", add(-2147483648, -2147483648));
    printf("%d\n", add(2147483647, 2147483647));
    printf("%d\n", add(5, -3));
    printf("%d\n", add(-1799608842, -1505362750));
    printf("%d\n", add(-1193932268, -739412326));
    printf("%d\n", add(-8, -8));
    printf("%d\n", add(-8, 9));  // finished printing calculations of add!
    printf("%d\n", sub(-1, 4));
    printf("%d\n", sub(3, 5));
    printf("%d\n", sub(-9, -7));
    printf("%d\n", sub(10, 1));
    printf("%d\n", sub(-9, 7));
    printf("%d\n", sub(-2147483648, 1));
    printf("%d\n", sub(-4, -2));
    printf("%d\n", sub(-9, 9));
    printf("%d\n", sub(5, 2));
    printf("%d\n", sub(-2, 9));
    printf("%d\n", sub(-1, -7));
    printf("%d\n", sub(2, -8));
    printf("%d\n", sub(2, 7));
    printf("%d\n", sub(2, 6));
    printf("%d\n", sub(8, -4));
    printf("%d\n", sub(-5, 4));
    printf("%d\n", sub(1, -8));
    printf("%d\n", sub(4, 10));
    printf("%d\n", sub(-2147483648, 2147483647));
    printf("%d\n", sub(2147483647, 2147483647));
    printf("%d\n", sub(-1799608842, 1505362750));
    printf("%d\n", sub(-1193932268, 739412326));
    printf("%d\n", sub(1690446029, -1227832313));
    printf("%d\n", sub(-1485781014, 1941883332));
    printf("%d\n", sub(1021042896, -1734076753));  // finished printing calculations of sub!
    printf("%d\n", multi(10, 5));
    printf("%d\n", multi(1, 8));
    printf("%d\n", multi(-9, -7));
    printf("%d\n", multi(10, 1));
    printf("%d\n", multi(2, -2));
    printf("%d\n", multi(8, -3));
    printf("%d\n", multi(-2147483648, 1));
    printf("%d\n", multi(-4, -2));
    printf("%d\n", multi(-9, 9));
    printf("%d\n", multi(5, 2));
    printf("%d\n", multi(-2, 9));
    printf("%d\n", multi(-1, -7));
    printf("%d\n", multi(2, -8));
    printf("%d\n", multi(2, 7));
    printf("%d\n", multi(2, 6));
    printf("%d\n", multi(8, -4));
    printf("%d\n", multi(-5, 4));
    printf("%d\n", multi(1, -8));
    printf("%d\n", multi(4, 10));
    printf("%d\n", multi(-2147483648, -2147483648));
    printf("%d\n", multi(2147483647, 2147483647));
    printf("%d\n", multi(5, -3));
    printf("%d\n", multi(-1799608842, -1505362750));
    printf("%d\n", multi(-1193932268, -739412326)); // finished printing calculations of multi!
    printf("%d\n", equal(4, 4));
    printf("%d\n", equal(0, -0));
    printf("%d\n", equal(1374905205, 1374905205));
    printf("%d\n", equal(-2147483648, 0));
    printf("%d\n", equal(-2147483648, -2147483648));
    printf("%d\n", equal(2147483647, 2147483647));
    printf("%d\n", equal(5, -3));
    printf("%d\n", equal(-1799608842, -1505362750));
    printf("%d\n", equal(-1193932268, -739412326));
    printf("%d\n", equal(4, 4));
    printf("%d\n", equal(0, -0));
    printf("%d\n", equal(1374905205, 1374905205));
    printf("%d\n", equal(-2147483648, 0)); // finished printing calculations of equal!
    printf("%d\n", greater(4, 4));
    printf("%d\n", greater(0, -2147483648));
    printf("%d\n", greater(0, -0));
    printf("%d\n", greater(1374905205, 1374905205));
    printf("%d\n", greater(-2147483648, -2147483648));
    printf("%d\n", greater(2147483647, 2147483647));
    printf("%d\n", greater(5, -3));
    printf("%d\n", greater(-1799608842, -1505362750));
    printf("%d\n", greater(-1193932268, -739412326));
    printf("%d\n", greater(4, -4));
    printf("%d\n", greater(2147483647, -2147483648));
    printf("%d\n", greater(1374905205, 1374905205));
    printf("%d\n", greater(-2147483648, 0));
    printf("%d\n", greater(4, 4)); // finished printing calculations of greater!
}