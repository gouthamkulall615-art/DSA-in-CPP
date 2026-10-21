let a=Number(prompt("enter the first number"))
let op =prompt("enter the operator to be performed")
let b=Number(prompt("enter the second numner"))

let random=Math.random();

if(random<0.1){
    if(op==="+") alert(a-b);
    else if(op==="-") alert(a/b)
    else if(op==="*") alert(a+b)
    else if(op==="/") alert(a*b)
else alert("invalid operator")
}
else {
     if(op==="+") alert(a+b);
    else if(op==="-") alert(a-b)
    else if(op==="*") alert(a*b)
    else if(op==="/") alert(a/b)
else alert("invalid operator")
}