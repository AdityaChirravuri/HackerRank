package main

import (
	"bufio"
	"fmt"
	"os"
)

func Main() {
	//Enter your code here. Read input from STDIN. Print output to STDOUT
	var s = "Hello, World."
	fmt.Println(s)
	sc := bufio.NewScanner(os.Stdin)
	for sc.Scan() {
		fmt.Println(sc.Text())
	}

}
