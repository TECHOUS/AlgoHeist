// This program sorts the array of randomly generated numbers in between -100 to +100 using Bubble Sort

package main

import (
    "fmt"
    "math/rand"
    "time"
)

func main(){

    array := generatearray(10)  // assign 10 numbers for the array
    fmt.Println("\nUnsorted Array: \n\n", array)
    bubbleSort(array)
    fmt.Println("\nSorted Array: \n\n", array, "\n")
}

// array (size: 10) will be filled with randomly generated numbers in between -100 to +100
func generatearray(size int) []int {

    array := make([]int, size, size)
    rand.Seed(time.Now().UnixNano())
    for i := 0; i < size; i++ {
        array[i] = rand.Intn(100) - rand.Intn(100)
    }
    return array
}

func bubbleSort(arr []int) {
    var (
        n = len(arr)
        sorted = false
    )
    for !sorted {
        swapped := false
        for i := 0; i < n-1; i++ {
            if arr[i] > arr[i+1] {
                arr[i+1], arr[i] = arr[i], arr[i+1]
                swapped = true
            }
        }
        if !swapped {
            sorted = true
        }
        n = n - 1
    }
}