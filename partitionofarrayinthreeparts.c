bool canThreePartsEqualSum(int* arr, int arrSize) {
    int sum = 0;
    int c = 0;
    int innersum = 0;
    for (int i = 0; i < arrSize; i++) {
        sum += arr[i];
    }
    if (sum % 3 != 0) {
        return false;
    }
    int a = sum / 3;
    for (int i = 0; i < arrSize; i++) {
        innersum += arr[i];
        if (innersum == a) {
            c++;
            innersum = 0; 
        }
    }
    if (c > 2) {
        return true;
    }
    return false;
}


