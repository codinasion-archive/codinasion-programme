<?php
// Write a PHP programme to find area of triangle.

// Formula: 
// s = (a + b + c) / 2
// s: semi-perimeter
// area = √s * (s-a) * (s-b) * (s-c)

function calculate_area(int|float $a, int|float $b, int|float $c) {

    $s = ($a + $b + $c) / 2;
    // return $s;
    $a = ($s - $a);
    $b = ($s - $b);
    $c = ($s - $c);

    if ($a < 0 || $b < 0 || $c < 0) {

        // No negative numbers for formula
        return false;

    } else {

        $area = $s * $a * $b * $c;
        return sqrt($area);

    }

}

$a = readline("Enter the length of the first side of the triangle: ");
$b = readline("Enter the length of the second side of the triangle: ");
$c = readline("Enter the length of the third side of the triangle: ");
$area = calculate_area($a, $b, $c);

if (!$area) {

    print "\nNegative number detected, please try again with new values";

} else {

    print "\nFirst side length: {$a}";
    print "\nSecond side length: {$b}";
    print "\nThird side length: {$c}";
    print "\nCalculated Area: {$area}";

}

?>