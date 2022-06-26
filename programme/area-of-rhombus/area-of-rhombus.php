<?php
// Write a programme to find the area of a rhombus

function calculate_area(int|float $diag_one, int|float $diag_two) {

    if (!is_numeric($diag_one)) {

        return 'Invalid input: Diagonal 1 is not a number';

    }

    if (!is_numeric($diag_two)) {

        return 'Invalid input: Diagonal 2 is not a number';

    }

    $area = ($diag_one * $diag_two) / 2;

    return $area;

}

$diag_one = readline("Enter Diagonal Value #1: ");
$diag_two = readline("Enter Diagonal Value #2: ");
$area = calculate_area($diag_one, $diag_two);

print "\nDiagonal #1: {$diag_one}";
print "\nDiagonal #2: {$diag_two}";
print "\nArea: {$area}";

?>