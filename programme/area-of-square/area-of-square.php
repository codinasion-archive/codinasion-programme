<?
// Write a programme to find area of square

function area_of_square(int|float $num) {

    if (!is_numeric($num)) {

        return 'Invalid input: Input entered was not a number';

    }

    return $num ** 2;

}

$num = readline("Enter a number: ");
$area = area_of_square($num);

print "\nInputted number: {$num}";
print "\nArea of Square: {$area}";
?>