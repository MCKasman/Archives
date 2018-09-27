<?php

$servername = "localhost";
$username = "id6799686_mckasman";
$password = "Kasman";
$database = "id6799686_mysql_test";

// create connection
$conn = mysqli_connect($servername, $username, $password, $database);

// check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

// queries database
$query = "SELECT * FROM users";

if ($result = mysqli_query($conn, $query)){

  $row = mysqli_fetch_array($result); // fetches the array associated with the query

  echo "Your email is " .$row["email"]. " and your password is " .$row["password"];

  print_r($row); //prints readable version of an array
}
?>
