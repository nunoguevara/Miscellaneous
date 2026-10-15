package main

import "fmt"

func main() {
  list := [6]int{5, 7, 9, 10, 12, 31}
  find := 7
  list_size := len(list)

  for i := 0; i < list_size; i++{
    if list[i] == find {
      fmt.Println("FOUND! Index:", i)
      return 
    }
  }

  return
}
