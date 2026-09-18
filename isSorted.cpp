bool isSorted(const int* arr, const int size) {
    if (size <= 1) {
        return true;
    }
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}