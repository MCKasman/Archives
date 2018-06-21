<?php

$myArray = array("Rob", "Michael", "Pravat", "Clark");

$myArray[] = "Maggie";

print_r($myArray); //print_r shows the contents of an array or any other variable

echo $myArray[1];

$anotherArray[0] = "Robot";

$anotherArray[1] = "Revolution";

$anotherArray[5] = "!";

$anotherArray["myGoal"] = "Robot Revolution";

print_r($anotherArray);

$thirdArray = array("Germany" => "German", "USA" =>"English");

unset($thirdArray["USA"]); //unset to delete variables and items

print_r($thirdArray);

echo sizeof($thirdArray);
 ?>
