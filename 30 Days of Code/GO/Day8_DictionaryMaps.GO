package main

import (
    "bufio"
    "fmt"
    "os"
    "strconv"
    "strings"
)

func main() {
    // map
    m := make(map[string]string)

    //input line
    var w string

    scanner := bufio.NewScanner(os.Stdin)

    scanner.Scan()

    c, _ := strconv.ParseInt(scanner.Text(), 10, 32)
    //add to the map
    for i := 0; i < int(c); i++ {
        //read the line
        scanner.Scan()
        // store line in var
        w = scanner.Text()
        // split the string on space
        ws := strings.Split(w, " ")
        //store the values in the map
        m[ws[0]] = ws[1]

    }

    //Now, query the map
    for scanner.Scan() {
        //key
        k := scanner.Text()
        if val, ok := m[scanner.Text()]; ok {
            fmt.Printf("%v=%v\n", k, val)
        } else {
            fmt.Println("Not found")
        }
        
    }
}