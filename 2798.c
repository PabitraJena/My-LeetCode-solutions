// 2798. Number of Employees Who Met the Target

int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target){
    int count = 0;

    for (int i = 0; i < hoursSize; i++){
        if (hours[i] >= target){
            count++;
        }
    }
    return count;
}