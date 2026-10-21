let a=prompt("enter a number")

const factorial=(a)=>{
    if(a==1|| a==0)
        return 1
    else{
        return a*factorial(a-1)
    }
}
console.log(factorial)