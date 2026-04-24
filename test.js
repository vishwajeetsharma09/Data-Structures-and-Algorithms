// setTimeout(() => {
//   console.log("vishwajeet sharma ");
// }, 7000);

// function sum(a, b) {
//   return a + b;
// }
// // sum(3, 4);

// const sum1 = (a, b) => {
//   return a + b;
// };
// console.log(sum1(31, 8));

function x() {
  for (var i = 1; i <= 5; i++) {
    function close(i) {
      setTimeout(() => {
        console.log(i * i);
      }, i * 1000);
    }
    close(i);
  }
}

x();
