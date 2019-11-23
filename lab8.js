randomFibo = () => {
    var x = parseInt(Math.random()*10000)
    console.log('So random la ' + x)
    fib = (x) => {
        var first = 1;
        var second = 1;
        var temp = 0;
        var flag = true;
        
        while(flag) {
            temp = first;
            first = second;
            second = temp + second;
            if(second >= x && second <= x + 10000) {
                console.log(second)
            } else if(second > x + 10000){
                flag = false
            }
            
        }
    }
    fib(x)
}
randomFibo()