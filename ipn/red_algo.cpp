#include <iostream>
#include <cstdlib>
#include <ctime>

int maxQueueSize = 6;
int minThreshold = 2;
int maxThreshold = 4;
float maxP = 0.5; // Maximum drop probability
int currentQueueSize = 0;

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed for randomness

    // Simulate 15 packet arrivals
    for (int i = 0; i < 8; ++i) {
        if (currentQueueSize >= maxQueueSize) {
            std::cout << "Packet dropped: Queue full" << std::endl;
        } else if (currentQueueSize < minThreshold) {
            // Accept all packets below minThreshold
            currentQueueSize++;
            std::cout << "Packet enqueued: Current queue size = " << currentQueueSize << std::endl;
        } else if (currentQueueSize < maxThreshold) {
            // Drop probabilistically between minThreshold and maxThreshold
            float dropProbability = maxP * (currentQueueSize - minThreshold) / (maxThreshold - minThreshold);
            if (dropProbability > static_cast<float>(rand()) / RAND_MAX) {
                std::cout << "Packet dropped (random drop): Current queue size = " << currentQueueSize << std::endl;
            } else {
                currentQueueSize++;
                std::cout << "Packet enqueued (random accept): Current queue size = " << currentQueueSize << std::endl;
            }
        } else {
            // Drop all packets above maxThreshold
            std::cout << "Packet dropped: Above max threshold" << std::endl;
        }

        // Randomly dequeue to simulate packet processing
        if (currentQueueSize > 0 && rand() % 2 == 0) {
            currentQueueSize--;
            std::cout << "Packet dequeued: Current queue size = " << currentQueueSize << std::endl;
        }
    }

    return 0;
}
