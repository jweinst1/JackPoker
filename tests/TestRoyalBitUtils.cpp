#include "royal-bit-utils.h"
#include <cstdio>
#include <cstdlib>
#include <cstdint>

static unsigned _FAILURES = 0;

#define CHECK(cond) if(!(cond) && ++_FAILURES) \
    std::fprintf(stderr, "FAILURE: cond='%s', line=%u, file=%s\n",  \
                  #cond,  \
                  (unsigned)__LINE__, \
                  __FILE__)
                  
                  
static void testIsSetMacros() {
    std::uint64_t base = 0xff;
    bool result = ROYAL_BIT_IS_SET_2(base);
    CHECK(!result);
}

static void test__royal_bit_util_count() {
    std::uint64_t base = 0x0f;
    unsigned result = __royal_bit_util_count(base);
    CHECK(result == 4);
}

int main(int argc, char const* argv[]) {
    testIsSetMacros();
    test__royal_bit_util_count();
    return _FAILURES ? 3 : 0;
}