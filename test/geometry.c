/**
 * Copyright © 2011 Canonical, Ltd.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without limitation
 *  the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *  and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice (including the next
 *  paragraph) shall be included in all copies or substantial portions of the
 *  Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 *  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *  DEALINGS IN THE SOFTWARE.
 */

/**
 * Verify structures dealing with geometry.
 */

#include <assert.h>

#include "XrandrUtils.h"

/**
 * Verify XRUPoint struct members
 */
static void geometry_point(void)
{
    XRUPoint p;
    p.x = 1;
    p.y = -1;

    assert( 1 == p.x);
    assert(-1 == p.y);
}

/**
 * Verify XRUBox struct members
 */
static void geometry_box(void)
{
    XRUBox b;
    b.x1 = b.y1 = 0;
    b.x2 = b.y2 = 100;

    assert(  0 == b.x1);
    assert(  0 == b.y1);
    assert(100 == b.x2);
    assert(100 == b.y2);
}

int main(int argc, char** argv)
{
    geometry_point();
    geometry_box();

    return 0;
}
