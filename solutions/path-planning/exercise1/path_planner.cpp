#include <cassert>
#include <iostream>
#include <string>
#include <vector>

/**
 * TASK: Fill in the logic for planPath.
 * The function should return a vector of integers representing the indices
 * the robot visited.
 * * Rules:
 * 1. Start at index 0.
 * 2. Move one step at a time toward the goal.
 * 3. If you hit a '1' (obstacle), stop immediately and return the path found so
 far.
 * 4. If you reach the 'goal' index, include it in the path and return.
 g++ path_planner.cpp -o path_planner.exe; .\path_planner.exe
 */

std::vector<int> planPath(const std::vector<int> &world, int goal) {
  std::vector<int> path;

  // --- YOUR CODE HERE ---
  for (auto i = 0; i < world.size() && i != goal; i++) {
    if (world[i] == 1) {
      return path;
    }
    path.push_back(i);
  }
  // ----------------------
  path.push_back(goal);
  return path;
}

// --- Simple Test Suite ---
void runTests() {
  // Test 1: Clear path
  std::vector<int> world1 = {0, 0, 0, 0, 0};
  std::vector<int> result1 = planPath(world1, 3);
  assert(result1.size() == 4); // Indices: 0, 1, 2, 3
  std::cout << "Test 1 Passed: Clear path reached." << std::endl;

  // Test 2: Obstacle in the way
  std::vector<int> world2 = {0, 0, 1, 0, 0};
  std::vector<int> result2 = planPath(world2, 4);
  assert(result2.size() == 2); // Should stop before index 2
  assert(result2.back() == 1); // Last successful step was index 1
  std::cout << "Test 2 Passed: Obstacle handled correctly." << std::endl;

  // Test 3: Goal is at start
  std::vector<int> world3 = {0, 0, 0};
  std::vector<int> result3 = planPath(world3, 0);
  assert(result3.size() == 1);
  std::cout << "Test 3 Passed: Start equals goal." << std::endl;

  std::cout << "\nAll tests passed! You're officially a path planner."
            << std::endl;
}

int main() {
  runTests();
  return 0;
}
