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

$name = mysqli_real_escape_string($conn, ""); //escape_string adds backslashes to prevent sql injection

//$query = "SELECT * FROM users WHERE id='1'"; //this specifically gets the user of id 1

//$query = "SELECT * FROM users WHERE id >= '2'"; //this specifically gets the user of id >= 2

//$query = "SELECT * FROM users WHERE email LIKE '%gmail.com'"; //this means select everything in the table where email ends (%) with gmail.com

//$query = "SELECT * FROM users WHERE id >= '2' AND email LIKE '%gmail.com'"; //this specifically gets the user of id >= 2 AND email ends with gmail.com

//$query = "SELECT * FROM users WHERE id >= '2' OR email LIKE '%gmail.com'"; //this specifically gets the user of id >= 2 OR email ends with gmail.com

//$query = "SELECT * FROM users WHERE name='$name'"; //we can use variables in MySQL

$query = "SELECT * FROM users WHERE email='mck.kasman@gmail.com'"

// "LIKE" means you can put a variety of symbols in the query
// "%" means all

if ($result = mysqli_query($conn, $query)){

  while($row = mysqli_fetch_array($result)){ // fetch all rows selected by the query

  print_r($row); //prints readable version of an array
  }
}
?>
