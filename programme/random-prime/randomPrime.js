const prime = (min, max) => {
  const result = Array(max + 1)
    .fill(0)
    .map((_, i) => i);
  for (let i = 2; i <= Math.sqrt(max + 1); i++) {
    for (let j = i ** 2; j < max + 1; j += i) delete result[j];
  }
  return Object.values(result.slice(Math.max(min, 2)));
};

const getRandomPrime = (min, max) => {
  return Math.floor(Math.random() * (max - min + 1) + min);
};

const randomPrime = (min, max) => {
  const primes = prime(min, max);
  return primes[getRandomPrime(0, primes.length - 1)];
};

// Example
console.log(randomPrime(1, 9)); // 7
console.log(randomPrime(1, 100)); // 3
console.log(randomPrime(1, 1000)); // 311
console.log(randomPrime(-100, 10000)); // 1747

