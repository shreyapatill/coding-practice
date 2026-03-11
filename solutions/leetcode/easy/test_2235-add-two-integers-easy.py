import pytest
from add_two_integers_easy import Solution

def test_add():
    solution = Solution()
    assert solution.sum(1, 2) == 3
    assert solution.sum(-1, 1) == 0
    assert solution.sum(-1, -1) == -2
    assert solution.sum(0, 0) == 0
    assert solution.sum(100, 200) == 300
