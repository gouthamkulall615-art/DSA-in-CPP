// function api() {
//   return new Promise((resolve, reject) => {
//     setTimeout(() => {
//       console.log("weather data");
//       resolve(200);
//     }, 2000);
//   });
// }

// async function getWeather() {
//   await api(); //1st caLL
//   await api();
// }

function getData(dataId) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log("data", dataId);
      resolve("success");
    }, 2000);
  });
}

// async function getAllData() {
//     await getData(1);
//     await getData(2);
//     await getData(3);
// }

(async function getAllData() {
  await getData(1);
  await getData(2);
  await getData(3);
})();

/*
iife:immediately invoked function expression
three methods to use it
1.(funtion (){
code
})()

2.(()=>{
    code
    })();

3.(async()=>{
    code
    })()    
*/
