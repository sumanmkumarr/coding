#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed for randomness

    // Simulate a queue with 10 packets (represented by an array of integers)
    int queue[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int queueSize = 10;

    // Display initial queue
    std::cout << "Initial queue: ";
    for (int i = 0; i < queueSize; i++) {
        std::cout << queue[i] << " ";
    }
    std::cout << std::endl;

    // Randomly select an index to drop
    int randomIndex = rand() % queueSize;
    std::cout << "Dropping packet at index " << randomIndex << " (packet " << queue[randomIndex] << ")" << std::endl;

    // Mark the packet as dropped (set to -1)
    queue[randomIndex] = -1;

    // Display queue after dropping packet
    std::cout << "Queue after dropping packet: ";
    for (int i = 0; i < queueSize; i++) {
        std::cout << queue[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
