// 4020. Elevator Requests I

int elevatorRequests(int n, int* requests, int requestsSize) {
    int currentFloor = 0;
    int totalTime = 0;

    for (int i = 0; i < requestsSize; i++){
        totalTime += abs(requests[i] - currentFloor);
        currentFloor = requests[i];
    }

    return totalTime;
}
