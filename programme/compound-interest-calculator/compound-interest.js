// Write a programme to calculate compound interest

function calculateCompoundInterest(amount, time, rate) {
  const finalAmount = amount * (1 + rate / 100) ** time;
  console.log("Amount :", finalAmount.toFixed(2));

  const compoundInterest = finalAmount - amount;
  return compoundInterest.toFixed(2);
}

let amount = 100;
let time = 10;
let rate = 10;

console.log(
  "Compound Interest :",
  calculateCompoundInterest(amount, time, rate)
);
