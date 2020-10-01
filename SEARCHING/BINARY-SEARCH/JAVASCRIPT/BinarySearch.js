function binarySearch(umVetor, item) {
    let first = 0;
    let last = umVetor.length - 1;
    let find = false;
    while (first <= last && !find) {
        middle = Math.ceil((first + last) / 2);
        if (umVetor[middle] == item) {
            find = true;
        }
        else {
            if (item < umVetor[middle]) {
                last = middle - 1;
            }
            else {
                first = middle + 1;
            }
        }
    }
    return find;
}