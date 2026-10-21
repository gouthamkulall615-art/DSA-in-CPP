let display=document.querySelector(".display")
let numbers=document.querySelectorAll(".number")

numbers.forEach((btn) => {
    btn.addEventListener("click",()=>{
       const value=btn.textContent;
       display.value=display.value+value 
    })
});

let previousValue = "";
let operator = null;

// operators
const operators = document.querySelectorAll(".operator");
const equalBtn = document.querySelector(".equal");

// operator click
operators.forEach((btn) => {
  btn.addEventListener("click", () => {
    previousValue = display.value;   // first number
    operator = btn.textContent;      // + - * /
    display.value = "";              // ready for second number
  });
});

// equal click
equalBtn.addEventListener("click", () => {
  let currentValue = display.value;
  let result;

  if (operator === "+") {
    result = Number(previousValue) + Number(currentValue);
  } 
  else if (operator === "-") {
    result = Number(previousValue) - Number(currentValue);
  } 
  else if (operator === "*") {
    result = Number(previousValue) * Number(currentValue);
  } 
  else if (operator === "/") {
    result = Number(previousValue) / Number(currentValue);
  }

  display.value = result;
});
