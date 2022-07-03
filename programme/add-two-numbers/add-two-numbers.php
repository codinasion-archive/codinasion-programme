<?php

ini_set('display_errors', true);
error_reporting(E_ALL);

// Add two numbers

function sum(int|float $one, int|float $two) {

    if (!is_numeric($one)) {

        return 'Invalid input: Input 1 is not a number';

    }

    if (!is_numeric($two)) {

        return 'Invalid input: Input 2 is not a number';

    }

    return $one + $two;

}

$one = readline("Enter the first number: ");
$two = readline("Enter the second number: ");
$sum = sum($one, $two);

print "\nFirst Number: {$one}";
print "\nSecond Number: {$two}";
print "\nSum: {$sum}";

?>