# -*- coding: utf-8 -*-

from __future__ import absolute_import, division, print_function


class Solution(object):
    def divisorGame(self, N):
        result = [False] * (N + 1)

        for i in xrange(2, N + 1):
            for j in xrange(1, i):
                if i % j == 0 and not result[i - j]:
                    result[i] = True

        return result[N]


if __name__ == '__main__':
    solution = Solution()

    assert solution.divisorGame(2)
    assert not solution.divisorGame(3)