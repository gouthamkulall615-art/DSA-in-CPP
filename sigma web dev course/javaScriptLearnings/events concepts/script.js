let btn = document.getElementById("btn");

btn.addEventListener("dblclick", () => {
    document.querySelector(".box").innerHTML = "<b>hey iam goutham </b> nice to meet you!!"
})

btn.addEventListener("contextmenu", () => {
alert("hey dont right click and hack us!?")
})

document.addEventListener("keydown",(e)=>{
    console.log(e);
})