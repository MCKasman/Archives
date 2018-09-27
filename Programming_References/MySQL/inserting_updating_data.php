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

//$query = "INSERT INTO users (email, password) VALUES ('wonderofexodus@gmail.com', 'Comets')"; // inserts new email and password into the user table

//$query = "UPDATE users SET email='michael.kasman@gmail.com' WHERE id='1' LIMIT 1"; // update database information new email where the id is 1; the limit is just for extra safety to update once

$query = "UPDATE users SET password = 'FortyAcresOrBust' WHERE email = 'michael.kasman@gmail.com' LIMIT 1";

mysqli_query($conn, $query); // query function for MySQL

// queries database
$query = "SELECT * FROM users";

if ($result = mysqli_query($conn, $query)){

  $row = mysqli_fetch_array($result); // fetches the array associated with the query

  echo "Your email is " .$row["email"]. " and your password is " .$row["password"];

  print_r($row); //prints readable version of an array
}
?>
