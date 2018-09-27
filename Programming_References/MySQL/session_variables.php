<?php

  session_start();

  $_SESSION['username'] = "mckasman"; // user will still be logged in, as long as they don't shutdown their browser

  echo $_SESSION['username'];
?>
