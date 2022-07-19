<?php
// Write a programme to find index of an alphabet

$char = readline("Input  : ");

if (ctype_upper($char)) {
    echo "Output : " . (ord($char) - 64);
} else {
    echo "Output : " . (ord($char) - 96);
}
echo "\n";
