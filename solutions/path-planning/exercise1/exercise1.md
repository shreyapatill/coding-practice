Welcome to the world of path planning! It’s a field where math meets movement, and it can get complex fast—so let’s start with the "Hello World" of the industry: **Grid-Based Navigation.**

The simplest task is finding a path on a **1D or 2D grid** where some cells are "blocked" (walls) and others are "free" (path). To keep this ultra-simple for a single-file C++ task, we are going to implement a **Greedy Linear Search**.

### The Task: "The Robot's Straight Shot"

You have a 1D world (an array). Your robot starts at index `0` and wants to reach a `goal`. If there is a wall (represented by `1`) in the way, the robot stops. If the path is clear (represented by `0`), it reaches the goal.

---

### The Template

Copy this into a file named `path_planner.cpp`. Your job is to fill in the logic inside the `planPath` function.

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

/**
 * TASK: Fill in the logic for planPath.
 * The function should return a vector of integers representing the indices 
 * the robot visited.
 * * Rules:
 * 1. Start at index 0.
 * 2. Move one step at a time toward the goal.
 * 3. If you hit a '1' (obstacle), stop immediately and return the path found so far.
 * 4. If you reach the 'goal' index, include it in the path and return.
 */

std::vector<int> planPath(const std::vector<int>& world, int goal) {
    std::vector<int> path;
    
    // --- YOUR CODE HERE ---
    
    // ----------------------
    
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

    std::cout << "\nAll tests passed! You're officially a path planner." << std::endl;
}

int main() {
    runTests();
    return 0;
}

```

---

### How to Run It

1. Save the code as `path_planner.cpp`.
2. Open your terminal/command prompt.
3. Compile using: `g++ path_planner.cpp -o planner`
4. Run it: `./planner` (or `planner.exe` on Windows).

### Tips for a Beginner

* **The Loop:** You'll likely want a `for` loop that starts at `0` and goes up to (and including) the `goal`.
* **The Obstacle Check:** Inside the loop, check `if (world[i] == 1)`. If that's true, you've hit a wall! Use `break` to exit the loop.
* **Storing the Path:** Use `path.push_back(i)` to record each step the robot takes.