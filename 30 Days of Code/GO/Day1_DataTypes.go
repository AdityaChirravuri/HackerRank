package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	var _ = strconv.Itoa // Ignore this comment. You can still use the package "strconv".

	var i uint64 = 4
	var d float64 = 4.0
	var s string = "HackerRank "

	scanner := bufio.NewScanner(os.Stdin)
	// Declare second integer, double, and String variables.
	var j uint64
	var f float64
	fmt.Scanf("%v", &j)
	fmt.Scanf("%f", &f)

	fmt.Println(i + j)
	fmt.Printf("%.1f\n", d+f)
	fmt.Printf("%s", s)
	for scanner.Scan() {
		fmt.Printf(scanner.Text())
	}
}
