<?php

ini_set('display_errors', true);
error_reporting(E_ALL);

// Add two numbers

function sum(int|float $one, int|float $two) {

    return $one + $two;

}

$one = readline("Enter the first number: ");
$two = readline("Enter the second number: ");
$sum = sum($one, $two);

print "\nFirst Number: {$one}";
print "\nSecond Number: {$two}";
print "\nSum: {$sum}";

?>