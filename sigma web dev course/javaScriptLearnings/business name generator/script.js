/* Create a business name generator by combining list of adjectives and shop name and another word


Adjectives:
Crazy 
Amazing
Fire 

Shop Name:
Engine
Foods
Garments

Another Word:
Bros
Limited
Hub



*/

let rand1=Math.ceil(Math.random()*3)
let rand2=Math.ceil(Math.random()*3)
let rand3=Math.ceil(Math.random()*3)

let first,sec,third

if(rand1===1)
{
    first="crazy"
}
else if(rand1===2)
{
    first="amazing"

}
else{
    first="fire"
}

if(rand2===1)
{
    sec="engine"
}
else if(rand1===2)
{
    sec="foods"

}
else{
    sec="garments"
}

if(rand3===1)
{
    third="bros"
}
else if(rand1===2)
{
    third="limited"

}
else{
    third="hub"
}
console.log(first + " " + sec + " " + third)