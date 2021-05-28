package main
import "fmt"

func main() {
    //Enter your code here. Read input from STDIN. Print output to STDOUT
    //n := int32();
    var n int
    var str string
    fmt.Scanf("%d", &n)
    for i:=0; i<n; i++{
        fmt.Scanf("%s", &str)
        var s string = " "
        for j:=0; j<len(str); j++{
            if j%2 == 0{
                fmt.Printf("%c", str[j])
            }else{
                s = s+string(str[j])
            }
        }
        fmt.Println(s)
    }
 
}