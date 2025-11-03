<?php
session_start();
include('includes/db.php');

// Redirect if not logged in
if (!isset($_SESSION['user_id'])) {
    header("Location: login.php");
    exit();
}

$user_id = $_SESSION['user_id'];
$result = mysqli_query($conn, "SELECT * FROM feedback WHERE user_id = $user_id");

?>
<!DOCTYPE html>
<html>
<head>
    <title>Dashboard - My Feedback</title>
</head>
<body>
    <h2>Welcome to your Dashboard</h2>
    <a href="submit_feedback.php">Submit New Feedback</a> | 
    <a href="logout.php">Logout</a>
    <h3>My Submitted Feedback</h3>
    <table border="1" cellpadding="10">
        <tr>
            <th>ID</th>
            <th>Subject</th>
            <th>Feedback</th>
            <th>Rating</th>
        </tr>
        <?php while($row = mysqli_fetch_assoc($result)): ?>
        <tr>
            <td><?= $row['id'] ?></td>
            <td><?= $row['subject'] ?></td>
            <td><?= $row['feedback'] ?></td>
            <td><?= $row['rating'] ?></td>
        </tr>
        <?php endwhile; ?>
    </table>
</body>
</html>