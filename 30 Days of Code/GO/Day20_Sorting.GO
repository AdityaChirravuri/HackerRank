package main

import (
    "bufio"
    "fmt"
    "io"
    "os"
    "strconv"
    "strings"
)



func main() {
    reader := bufio.NewReaderSize(os.Stdin, 16 * 1024 * 1024)

    nTemp, err := strconv.ParseInt(strings.TrimSpace(readLine(reader)), 10, 64)
    checkError(err)
    n := int32(nTemp)

    aTemp := strings.Split(strings.TrimSpace(readLine(reader)), " ")

    var a []int32

    for i := 0; i < int(n); i++ {
        aItemTemp, err := strconv.ParseInt(aTemp[i], 10, 64)
        checkError(err)
        aItem := int32(aItemTemp)
        a = append(a, aItem)
    }

    // Write your code here
    swaps := int32(0)
    temp := int32(0)
    for j:=0; j<int(len(a)); j++{
        for k:=0; k<int(len(a)-1); k++{
            if a[k] > a[k+1]{
                temp = a[k+1]
                a[k+1] = a[k]
                a[k] = temp
                swaps = swaps + 1
            }
        } 
    }
    
    fmt.Printf("Array is sorted in %d swaps.\n", swaps)
    fmt.Printf("First Element: %d\n", a[0])
    fmt.Printf("Last Element: %d", a[len(a)-1])
    
}

func readLine(reader *bufio.Reader) string {
    str, _, err := reader.ReadLine()
    if err == io.EOF {
        return ""
    }

    return strings.TrimRight(string(str), "\r\n")
}

func checkError(err error) {
    if err != nil {
        panic(err)
    }
}
