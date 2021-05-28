package main
import "fmt"
import "math"

func main() {
    var i int = 0;
    fmt.Scanf("%d", &i)
    
    for j := 0; j<i ; j++{
        var num int
        fmt.Scanf("%d", &num)
        var flag bool = true
        for i:=2; i<=int(math.Sqrt(float64(num))); i++{
            if num%i == 0{
                flag = false
                break
            }
        }
    
        if num <= 1{
            flag = false
        }
    
        if flag{
            fmt.Println("Prime")
        }else{
            fmt.Println("Not prime")
        }
    }
}