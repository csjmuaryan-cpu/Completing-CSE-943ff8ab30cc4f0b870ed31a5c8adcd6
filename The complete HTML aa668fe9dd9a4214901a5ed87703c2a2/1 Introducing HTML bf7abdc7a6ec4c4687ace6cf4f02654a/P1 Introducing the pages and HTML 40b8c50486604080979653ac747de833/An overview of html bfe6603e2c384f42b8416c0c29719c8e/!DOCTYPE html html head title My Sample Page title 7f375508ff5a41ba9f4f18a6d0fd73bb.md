# <!DOCTYPE html>
<html>
<head>
    <title>My Sample Page</title>
    <meta charset="UTF-8">
    <style>
        body { font-family: Arial, sans-serif; }
        h1 { color: #333; }
        .highlight { background-color: yellow; }
    </style>
</head>
<body>
    <header>
        <h1>Welcome to My Website</h1>
        <nav>
            <ul>
                <li><a href="#home">Home</a></li>
                <li><a href="#about">About</a></li>
                <li><a href="#contact">Contact</a></li>
            </ul>
        </nav>
    </header>
    <main>
        <section>
            <h2>About Us</h2>
            <p class="highlight">We are a small company with a passion for web development.</p>
            <img src="logo.png" alt="Company Logo">
        </section>
        <section>
            <h2>Contact Form</h2>
            <form action="/submit" method="post">
                <label for="name">Name:</label>
                <input type="text" id="name" name="name" required>