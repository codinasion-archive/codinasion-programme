<?php
// Write a programme to count capital letters in a string

function countCapitalLetters(string $text) {
    $count = 0;

    foreach (str_split($text) as $char) {
        if(ctype_upper($char)) {
            $count++;
        }
    }

    return $count;
}

$str = "HiiThere";

$capital_letters = countCapitalLetters("HiiThere");

print "\nInput : {$str}";
print "\nOutput : {$capital_letters}\n";

?>