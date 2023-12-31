# -*- coding: utf-8 -*-


class Solution:
    SQUARES_OF_PRIMES_UNDER_100 = [
        4,
        9,
        25,
        49,
        121,
        169,
        289,
        361,
        529,
        841,
        961,
        1369,
        1681,
        1849,
        2209,
        2809,
        3481,
        3721,
        4489,
        5041,
        5329,
        6241,
        6889,
        7921,
        9409,
    ]

    def isThree(self, n: int) -> bool:
        return n in self.SQUARES_OF_PRIMES_UNDER_100


if __name__ == "__main__":
    solution = Solution()

    assert not solution.isThree(2)
    assert solution.isThree(4)
