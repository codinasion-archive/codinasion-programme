<?php
/* Write a programme to check even or odd string

Input  : hiithere
Output : Even String

Input  : hii
Output : Odd String
*/

$user_input = readline('Input  : ');


if (strlen($user_input) % 2 == 0) {
  echo  "Even String";

}else{
    echo "Odd String";

}
