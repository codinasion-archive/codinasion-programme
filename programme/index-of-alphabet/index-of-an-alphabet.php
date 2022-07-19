<?php

$char = readline("Input: ");

if (ctype_upper($char)) {
   echo "Output: ".(ord($char) - 64);
} else {
   echo "Output: ".(ord($char) - 96);
}

?>

