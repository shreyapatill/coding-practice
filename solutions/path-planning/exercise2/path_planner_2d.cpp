#include <cassert>
#include <iostream>
#include <vector>

// A simple structure to hold 'row' and 'column' coordinates
struct Point {
  int r, c;

  // This allows us to compare two Points using ==
  bool operator==(const Point &other) const {
    return r == other.r && c == other.c;
  }
};

/**
 * TASK: 2D Greedy Path Planner
 *
 * The `grid` is a 2D map (a grid of rows and columns) where:
 *   0 represents free space.
 *   1 represents an obstacle.
 *
 * Rules for moving:
 * 1. Start at `r = 0, c = 0`.
 * 2. You can only move DOWN (increase row `r`) or RIGHT (increase col `c`).
 * 3. At each step, check the cell to your RIGHT and the cell DOWN.
 * 4. Move to the neighboring cell that is free (has a '0'). We guarantee there
 * is exactly one valid path in the tests.
 * 5. Add each Point you visit to the `path` vector using
 * `path.push_back(Point{r, c});`.
 * 6. Stop and return the path once you reach the `goal`.
 *
 * HINTS:
 * - The number of rows is `rows` and columns is `cols`.
 * - To check if the cell to the right is free: `c + 1 < cols && grid[r][c + 1]
 * == 0`
 * - To check if the cell below is free: `r + 1 < rows && grid[r + 1][c] == 0`
 */
std::vector<Point> planPath2D(const std::vector<std::vector<int>> &grid,
                              Point goal) {
  std::vector<Point> path;
  int r = 0;
  int c = 0;
  int rows = grid.size();
  int cols = grid[0].size();

  // --- YOUR CODE HERE ---
  // Hint: A `while` loop works great here. Keep looping until r == goal.r && c
  // == goal.c. Remember to push the very last Point (the goal itself) into the
  // path before returning!
  while (r != goal.r || c != goal.c) {
    path.push_back(Point{r, c});
    if (c + 1 < cols && grid[r][c + 1] == 0) {
      c++;
    } else if (r + 1 < rows && grid[r + 1][c] == 0) {
      r++;
    }
  }

  // ----------------------
  path.push_back(Point{r, c});
  return path;
}

// --- Simple Test Suite ---
void runTests() {
  // Test 1: Simple right then down
  std::vector<std::vector<int>> grid1 = {{0, 0, 1}, {1, 0, 0}, {1, 1, 0}};
  std::vector<Point> result1 = planPath2D(grid1, Point{2, 2});
  assert(result1.size() == 5);
  assert((result1[0] == Point{0, 0}));
  assert((result1[4] == Point{2, 2}));
  std::cout << "Test 1 Passed: Followed the clear path." << std::endl;

  // Test 2: Moving along the edges
  std::vector<std::vector<int>> grid2 = {{0, 1, 1}, {0, 1, 1}, {0, 0, 0}};
  std::vector<Point> result2 = planPath2D(grid2, Point{2, 2});
  assert(result2.size() == 5);
  assert((result2[2] == Point{2, 0})); // should have moved down twice, then right
  std::cout << "Test 2 Passed: Followed edge path." << std::endl;

  // Test 3: Start is the Goal
  std::vector<std::vector<int>> grid3 = {{0}};
  std::vector<Point> result3 = planPath2D(grid3, Point{0, 0});
  assert(result3.size() == 1);
  assert((result3[0] == Point{0, 0}));
  std::cout << "Test 3 Passed: Start is the goal." << std::endl;

  // Test 4: Single Row
  std::vector<std::vector<int>> grid4 = {{0, 0, 0, 0}};
  std::vector<Point> result4 = planPath2D(grid4, Point{0, 3});
  assert(result4.size() == 4);
  assert((result4[3] == Point{0, 3}));
  std::cout << "Test 4 Passed: Handled single row grid." << std::endl;

  // Test 5: Single Column
  std::vector<std::vector<int>> grid5 = {{0}, {0}, {0}, {0}};
  std::vector<Point> result5 = planPath2D(grid5, Point{3, 0});
  assert(result5.size() == 4);
  assert((result5[3] == Point{3, 0}));
  std::cout << "Test 5 Passed: Handled single column grid." << std::endl;

  // Test 6: Zig-zagging Down and Right
  std::vector<std::vector<int>> grid6 = {
    {0, 0, 0, 1},
    {1, 1, 0, 1},
    {1, 1, 0, 0}
  };
  std::vector<Point> result6 = planPath2D(grid6, Point{2, 3});
  assert(result6.size() == 6);
  assert((result6[2] == Point{0, 2}));
  assert((result6[5] == Point{2, 3}));
  std::cout << "Test 6 Passed: Zig-zagging path right and down." << std::endl;

  std::cout << "\nAll comprehensive tests passed! You're officially a 2D path planner." << std::endl;
}

int main() {
  runTests();
  return 0;
}
