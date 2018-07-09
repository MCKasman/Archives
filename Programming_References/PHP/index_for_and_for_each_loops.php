<?php

$family = array("Muljadi", "Julie", "Michael", "Nicky");

foreach($family as $key => $value){ //foreach loop - loops through all items in array and allows to do something with them with their key and value.

  $family[$key] = $value." Percival";

  echo "Array item ".$key." is ".$value." " ;             //"$key" is the index.
}                                                         //"$value" is the items stated in the array.

for($i = 0; $i < sizeOf($family); $i++){

  echo $family[$i]." ";
}

for($i = 10; $i >= 0; $i--){

  echo $i." ";
}

 ?>
