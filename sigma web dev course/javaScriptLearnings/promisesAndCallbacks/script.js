//call back example

// function sum(a, b) {
//   console.log(a + b);
// }

// function calculator(a, b, sumCallback) {
//   sumCallback(a, b);
// }
// calculator(1,2,sum)

function getData(dataId) {
  //2sec
  // console.log("data",dataId);
  return new Promise((resolve,reject)=>{
    setTimeout(() => {
    console.log("data", dataId);
    resolve("success");
  }, 2000);
  })
  
}

//promise chain

getData(1)
  .then((res) => {
    return getData(2);
  })
  .then((res) => {
    return getData(3);
  })
  .then((res) => {
    console.log("success");
  });

  
//call back hell
//call back hell can be neutralized with promise
/*getData(1, () => {
  getData(2,()=>{
    getData(3,()=>{
      getData(4)
    })
  });
});

//data 1
//data 2
//data 3*/

//promises

// const getPromise =()=>{
//    return new Promise((resolve, reject) => {
//     console.log("i am a promise")
//    resolve("success")
//     reject("some error")

//   })
// }

// let promise=getPromise();
// promise.them(()=>{
//   console.log("promise fulfilled");

// })
// promise.catch(()=>{
//   console.log("rejected")
// })

// function asynFun1() {
//   return new Promise((resolve, reject) => {
//     setTimeout(() => {
//       console.log("data1");
//       resolve("success");
//     }, 4000);
//   });
// }
// function asynFun2() {
//   return new Promise((resolve, reject) => {
//     setTimeout(() => {
//       console.log("data2");
//       resolve("success");
//     }, 4000);
//   });
// }

// console.log("fetching data1.....");
// let p1 = asynFun1();
// p1.then((res) => {
//   console.log(res);
//   console.log("fetching data2.....");
//   let p2 = asynFun2();
//   p2.then((res) => {
//     console.log(res);
//   });
// });
