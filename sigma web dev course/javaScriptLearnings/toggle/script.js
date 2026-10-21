const sunBtn=document.querySelector('.sun')
const moonBtn=document.querySelector('.moon')
const container=document.querySelector('.container')



moonBtn.addEventListener("click" ,()=>{
 container.classList.add('center')
})

sunBtn.addEventListener("click",()=>{
    container.classList.remove('center');
})
