package main

import "fmt" 

func search(list []int, to_find int) int {
  for index := range list {
    if list[index] == to_find {
      return index
    }
  }

  return 1
  
}

func main() {
  nums := [5]int{5, 8, 9, 10, 12}
  
  fmt.Println(search(nums[:], 10))
}
