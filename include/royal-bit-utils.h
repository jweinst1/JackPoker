#ifndef ROYAL_BIT_UTILS_H
#define ROYAL_BIT_UTILS_H

/**
 * Checks the amount of bits set.
 * @remarks These are all AT LEAST the specified set bits, they return true
 *          if more than N bits are set.
 */
#define ROYAL_BIT_IS_SET_1(num) (((num) & (num-1)) == 0)
#define ROYAL_BIT_IS_SET_2(num) (((num) & (num-1) & (num-2)) == 0)
#define ROYAL_BIT_IS_SET_3(num) (((num) & (num-1) & (num-2) & (num-3)) == 0)
#define ROYAL_BIT_IS_SET_4(num) (((num) & (num-1) & (num-2) & (num-3) & (num-4)) == 0)
#define ROYAL_BIT_IS_SET_5(num) (((num) & (num-1) & (num-2) & (num-3) & (num-4) \
                                  & (num-5)) == 0)

#endif // ROYAL_BIT_UTILS_H