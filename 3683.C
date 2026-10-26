// 3683. Earliest Time to Finish One Task

int earliestTime(int** tasks, int tasksSize, int* tasksColSize) {
    int minTime = tasks[0][0] + tasks[0][1];

    for (int i = 1; i < tasksSize; i++){
        int finishTime = tasks[i][0] + tasks[i][1];

        if (finishTime < minTime){
            minTime = finishTime;
        }
    }

    return minTime;
}