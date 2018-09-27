<?php

$servername = "localhost";
$username = "id6799686_mckasman";
$password = "Kasman";
$database = "id6799686_mysql_test";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $database);

// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

echo "Connected successfully";
?>
