// This program sorts the array of randomly generated 10 numbers in between -10 to +10 using Selection Sort

package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	arrSize := generateArr(10)
	fmt.Println("\nUnsorted Array: \n\n", arrSize)
	selectionSort(arrSize)
	fmt.Println("\nSorted Array: \n\n", arrSize)
}

// Generates random numbers
func generateArr(size int) []int {

	arr := make([]int, size, size)
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < size; i++ {
		arr[i] = rand.Intn(10) - rand.Intn(10)
	}
	return arr
}

// selection sort begins here
func selectionSort(items []int) {
	var n = len(items)
	for i := 0; i < n; i++ {
		var minIdx = i
		for j := i; j < n; j++ {
			if items[j] < items[minIdx] {
				minIdx = j
			}
		}
		items[i], items[minIdx] = items[minIdx], items[i]
	}
}
