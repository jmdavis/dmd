/* TEST_OUTPUT:
---
fail_compilation/test23003.c(101): Error: `size_t` is not defined, perhaps `#include <stddef.h>` ?
fail_compilation/test23003.c(102): Error: undefined identifier `object`
---
*/

/* https://issues.dlang.org/show_bug.cgi?id=23003
 */

#line 100

size_t x;
object y;
