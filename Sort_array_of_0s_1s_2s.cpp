#include <iostream>
#include <vector>

void sortColors(std::vector<int>& nums) {
    int low = 0;      // Pointer for the next position of 0
    int mid = 0;      // Pointer for the current element
    int high = nums.size() - 1; // Pointer for the next position of 2
    
    while (mid <= high) {
        if (nums[mid] == 0) {
            std::swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else { // nums[mid] == 2
            std::swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    std::vector<int> arr = {0, 1, 2, 1, 0, 2, 1, 0};
    sortColors(arr);
    
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
