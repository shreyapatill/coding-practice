#include <iostream>
#include <vector>

class ParkingSystem {
public:
    std::vector<int> slots;
        ParkingSystem(int big, int medium, int small) {
        slots = {big, medium, small};
    }
    
    bool addCar(int carType) {
       if (slots[carType-1] > 0){
            slots[carType-1]--;
            return true;
        }
        return false;
    }
};
/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
 int main() {
    // Example 1:
    std::cout << "=== Example 1 ===" << std::endl;
    ParkingSystem parkingSystem1(1, 1, 0);
    std::cout << std::boolalpha;
    std::cout << "addCar(1) -> " << parkingSystem1.addCar(1) << " (expected true)" << std::endl; // big
    std::cout << "addCar(2) -> " << parkingSystem1.addCar(2) << " (expected true)" << std::endl; // medium
    std::cout << "addCar(3) -> " << parkingSystem1.addCar(3) << " (expected false)" << std::endl; // small
    std::cout << "addCar(1) -> " << parkingSystem1.addCar(1) << " (expected false)" << std::endl; // big

    // Example 2:
    std::cout << "\n=== Example 2 ===" << std::endl;
    ParkingSystem parkingSystem2(0, 2, 1);
    std::cout << "addCar(1) -> " << parkingSystem2.addCar(1) << " (expected false)" << std::endl;  // big = 0
    std::cout << "addCar(2) -> " << parkingSystem2.addCar(2) << " (expected true)" << std::endl;   // medium
    std::cout << "addCar(3) -> " << parkingSystem2.addCar(3) << " (expected true)" << std::endl;   // small

    // Example 3:
    std::cout << "\n=== Example 3 ===" << std::endl;
    ParkingSystem parkingSystem3(2, 2, 2);
    std::cout << "addCar(3) -> " << parkingSystem3.addCar(3) << " (expected true)" << std::endl;   // small
    std::cout << "addCar(1) -> " << parkingSystem3.addCar(1) << " (expected true)" << std::endl;   // big
    std::cout << "addCar(3) -> " << parkingSystem3.addCar(3) << " (expected true)" << std::endl;   // small
    std::cout << "addCar(2) -> " << parkingSystem3.addCar(2) << " (expected true)" << std::endl;   // medium

    return 0;
}